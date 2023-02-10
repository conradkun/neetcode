class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        std::unordered_map<char, std::size_t> m;
        
        for (int i=0; i< s.size(); i++){
            m[s[i]]++;
            m[t[i]]--;
        }

        for (auto const& p: m){
            if (p.second)
                return false;
        }
        return true;
    }
};