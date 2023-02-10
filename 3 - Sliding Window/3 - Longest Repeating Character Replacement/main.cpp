class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;
        for (char c = 'A'; c <= 'Z'; c++){
            int i = 0, j = 0, rep = k;
            while (j < s.size()){
                if (s[j] != c){
                    rep--;
                    if (rep < 0){
                        while(s[i] == c) i++;
                        i++;
                        rep++;
                    }
                }
                j++;
                maxLen = max(maxLen, j - i);
            }
        }
        return maxLen;
    }
};