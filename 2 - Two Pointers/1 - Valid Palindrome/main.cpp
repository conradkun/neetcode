class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s (nums.begin(), nums.end());
        
        int maxCounter = 0;
        for (auto& n: s){
            if (!s.count(n - 1)){
                int counter = 1;
                while(s.count(n + counter)){
                    counter++;
                }
                maxCounter = max(counter, maxCounter);
            }
        }
        return maxCounter;
    }
};