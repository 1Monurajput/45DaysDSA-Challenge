class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int sell = INT_MIN;
        int profit=INT_MIN;
        for(auto it:prices){
            sell = max(it,sell);
            if(it<buy){
                buy = it;
                sell = it;
            }
            profit = max(profit,sell-buy);
        }
        cout<<buy;
        cout<<sell;
        return profit;
    }
};