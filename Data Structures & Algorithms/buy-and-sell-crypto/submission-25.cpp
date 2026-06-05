class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        for (int l = 0; l<prices.size();l++){
            int r = prices.size()-1;

            while (r!=l){
                maxProfit = max(maxProfit, (prices[r] - prices[l]));
                r--;
            }
        }

        return maxProfit;
    }
};
