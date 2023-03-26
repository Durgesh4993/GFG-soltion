class Solution {
    const int mod = 1e9+7;
    public:
		int CountWays(string s){
		    int n = s.length();
		    vector<int>dp(n + 1);
		    dp[n] = 1;
		    for(int i = n - 1; i >= 0; i--){
		        if(s[i] == '0')
		            continue;
		        dp[i] = dp[i + 1];
		        if(i + 1 < n){
		            int nextnum = (s[i] - '0') * 10 + (s[i + 1] - '0');
		            if(nextnum <= 26)
		                dp[i] = (dp[i] + dp[i + 2]) % mod;
		        }
		    }
		    return dp[0];
		}
};
