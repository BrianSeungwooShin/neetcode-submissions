class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int min_price = prices[0]; // Track the lowest buying price seen so far
        int max_profit = 0;        // Track the maximum profit found

        for (int i = 1; i < prices.size(); i++) {
            // If today's price is lower than our min_price, update our buy day
            if (prices[i] < min_price) {
                min_price = prices[i];
            } 
            // Otherwise, check if selling today yields a better profit
            else {
                int current_profit = prices[i] - min_price;
                max_profit = std::max(max_profit, current_profit);
            }
        }

        return max_profit;

        
    }
};
