class Solution{
  public:
    int cutRod(int price[], int n) {
        vector<int> dp(n+1, 0);
        for(int i = 1; i<=n; i++)
            for(int idx = 0; idx<i; idx++)
                dp[i] = max(dp[i], dp[idx] + price[i-idx-1]);
        return dp[n];
    }
};
