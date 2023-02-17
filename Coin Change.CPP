class Solution {
  public:
   long long int count(int coins[], int n, int sum) {

        // Most optimal solution
        vector<long long int> dp(sum+1, 0);
        dp[0] = 1;
        for(int i=0; i<n; i++)
            for(int j=coins[i]; j<=sum; j++)
                dp[j] += dp[j-coins[i]];
        return dp[sum];
    }
};
