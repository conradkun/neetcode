class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int maxLen = 0;
        int i = 0, j = 0;

        while (j < s.size()){
            char curr = s[j];
            if (m.count(curr) & m[curr] >= i){
                i = m[curr] + 1;
            }
            m[curr] = j;
            j++;

            maxLen = max(maxLen, j - i);
        }
        return maxLen;
    }
};