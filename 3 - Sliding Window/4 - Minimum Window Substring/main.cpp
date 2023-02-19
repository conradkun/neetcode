class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        unordered_map<char, int> mt;
        unordered_map<char, int> ms;

        // fill map for t
        for (auto& c: t)
            mt[c]++;

        int i = 0, j = 0;
        int have = 0, need = mt.size();
        pair<int, int> best = {-1, -1};
        
        while (j < s.size()){
            ms[s[j]]++;
            if (mt.count(s[j]) & ms[s[j]] == mt[s[j]])
                have++;
            j++;

            // cout << s.substr(i , j - i) << endl;
            if (have != need & best.first != -1){
                ms[s[i]]--;
                if (mt.count(s[i]) & ms[s[i]] == mt[s[i]] - 1)
                    have--;
                i++;

                // cout << s.substr(i , j - i) << endl;
            } 
            while (have == need){
                if (best.first == -1 | j - i < best.second - best.first){
                    best = {i, j};
                }
                ms[s[i]]--;
                if (mt.count(s[i]) & ms[s[i]] < mt[s[i]])
                    have--;
                i++;
                // cout << s.substr(i , j - i) << endl;
            }
        }
        return best.first == -1 ? "" : s.substr(best.first, best.second - best.first);
    }
};