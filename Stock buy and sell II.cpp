class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        if(n < 2){
            return 0;
        }
        int max_profit = 0;
        
        for(int i=1; i<n; i++) {
            if(prices[i] > prices[i-1]){
                max_profit +=  prices[i] - prices[i-1];
            }
        }
        return max_profit;
    }

};
