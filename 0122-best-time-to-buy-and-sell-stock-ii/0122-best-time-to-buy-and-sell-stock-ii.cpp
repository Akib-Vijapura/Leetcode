class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int purchases = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            purchases = min(purchases, prices[i]);

            if (prices[i] - purchases > 0) {
                profit += prices[i] - purchases;
                purchases = prices[i];
            }
        }

        return profit;
    }
};