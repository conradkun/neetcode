class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;
        unordered_map<string, int> m;

        for (auto& s: strs){
            string sCopy = s;
            sort(sCopy.begin(), sCopy.end());

            if (m.count(sCopy)){
                solution[m[sCopy]].push_back(s);
            } else {
                m[sCopy] = m.size();
                solution.push_back({s});
            }
        }

        return solution;
    }
};