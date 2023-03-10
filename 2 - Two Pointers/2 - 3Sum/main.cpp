class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> solution;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++){
            if (nums[i] > 0)
                break;
            if (i != 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1, k = nums.size() - 1;
            while(j < k){
                int threeSum = nums[i] + nums[j] + nums[k];
                if (threeSum > 0){
                    k--;
                } else if (threeSum < 0){
                    j++;
                } else {
                    solution.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    k--;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }

        return solution;
    }
};