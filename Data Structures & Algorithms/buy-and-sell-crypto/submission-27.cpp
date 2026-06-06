class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minl = prices[0];

        for(int r = 1; r<prices.size(); r++){
            minl = min(minl,prices[r]);
            maxProfit = max(maxProfit,prices[r]-minl);
        }

        return maxProfit;
    }
};
