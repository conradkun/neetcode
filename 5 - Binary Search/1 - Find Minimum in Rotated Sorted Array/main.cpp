class Solution {
public:
    int findMin(vector<int>& nums) {
        return binSearch(nums, 0, nums.size());
    }
    int binSearch(vector<int>& nums, int low, int high){
        if (low == high | nums[low] <= nums[high - 1]) return nums[low];
        int mid = (low + high) / 2;
        if (nums[mid] > nums[low]) return binSearch(nums, mid + 1, high);
        return min(nums[mid], binSearch(nums, low, mid));
    }
};