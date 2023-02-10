class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int i = 0, j = 1;
        while (j < prices.size()){
            maxProfit = max(maxProfit, prices[j] - prices[i]);
            if (prices[j] < prices[i]){
                i = j;
                j = i + 1;
                continue;
            }
            j++;
        }
        return maxProfit;
    }
};