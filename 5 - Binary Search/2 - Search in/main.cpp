class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size();

        while (low < high){
            int mid = (high - low) / 2 + low;

            if (nums[mid] == target) return mid;
            if (nums[low] <= nums[mid]){
                if (nums[low] <= target & target < nums[mid]) high = mid;
                else low = mid + 1;
            } else {
                if (nums[mid] < target & target <= nums[high - 1]) low = mid + 1;
                else high = mid;
            }
        }
        return -1;
    }
};