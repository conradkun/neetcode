class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;

        int maxArea = min(height[i], height[j]) * (j - i);

        while(i < j){
            if (height[i] < height[j]){
                i++;
                int newArea = min(height[i], height[j]) * (j - i);
                if (newArea > maxArea) maxArea = newArea;
            } else {
                j--;
                int newArea = min(height[i], height[j]) * (j - i);
                if (newArea > maxArea) maxArea = newArea;
            }
        }
        return maxArea;
    }
};