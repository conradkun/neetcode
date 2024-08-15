#include<string>
#include<vector>

class Solution {
public:

    std::string encode(std::vector<std::string>& strs) {
        std::string s = "";
        for (auto& str: strs) {
            s += std::to_string(str.size()) + "#" + str;
        }
        return s;
    }

    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> ans;
        int i = 0;
        while (i < s.size()) {
            int j = 0;
            while (s[i + j] != '#') j++;
            int size = stoi(s.substr(i, j));
            ans.push_back(s.substr(i + j + 1, size));
            i += j + 1 + size;
        }
        return ans;
    }
};
