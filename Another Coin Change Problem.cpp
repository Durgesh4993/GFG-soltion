class Solution {
  public:
    bool solve(vector<vector<int>>&dp,int n,int i,int k,int target,vector<int>&coins){
        if(target==0 && k==0){
            return true;
        }
        
        if(i==coins.size() || k<0){
            return false;
        }
        
        if(dp[k][target] != -1){
            return dp[k][target];
        }
        
        bool notTake=solve(dp,n,i+1,k,target,coins);
        bool take=false;
        if(target>=coins[i]){
            take=solve(dp,n,i,k-1,target-coins[i],coins);
        }
        return dp[k][target] = take||notTake;
        
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        vector<vector<int>> dp(K+1, vector<int> (target+1,-1));
        
        return solve(dp,N,0,K,target,coins);
    }
    
};
