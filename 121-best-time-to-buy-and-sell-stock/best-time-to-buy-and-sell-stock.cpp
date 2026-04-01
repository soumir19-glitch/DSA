class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],profit=0,cost=0;
        for(int i=1;i<prices.size();i++)
        {
            cost=prices[i]-buy;
            profit=max(profit,cost);
            buy=min(buy,prices[i]);
        }
        return profit;
    }
};