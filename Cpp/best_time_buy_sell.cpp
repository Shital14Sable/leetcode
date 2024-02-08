class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, n = prices.size() ;
        int low_in_window = prices[0];

        for(int i=0;i<n;i++){
            if(prices[i] < low_in_window){
                low_in_window = prices[i];
            }

            max_profit = max(max_profit, prices[i] - low_in_window);
        }
        return max_profit;
        
    }
};