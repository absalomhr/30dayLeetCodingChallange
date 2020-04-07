class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, diff = 0;
        if(size(prices) == 0)
            return 0;
        for(int i = 0; i < size(prices) - 1; i++){
            diff = prices[i + 1] - prices[i];
            if(diff > 0)
                profit += diff;
        }
        return profit;
    }
};