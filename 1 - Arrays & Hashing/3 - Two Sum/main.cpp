class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idx (nums.size());
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(),
            [&](const int& a, const int& b){
                return nums[a] < nums[b];
            }
        );

        int leftPtr = 0, rightPtr = nums.size() - 1;
        while (leftPtr < rightPtr){
            int sum = nums[idx[leftPtr]] + nums[idx[rightPtr]];
            if (sum == target) return {idx[leftPtr], idx[rightPtr]};
            if (sum < target) leftPtr++;
            else rightPtr--;
        }
        return {0,0};
    }
};