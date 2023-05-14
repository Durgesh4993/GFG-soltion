class Solution {

  public:
  vector<vector<long long>>dp;
  long long solve(int i,int flag,int n,vector<int>&a){
      if(i>=n)return 0;
      if(dp[i][flag]!=-1)return dp[i][flag];
      long long ans=0;
      ans=a[i]+solve(i+1,0,n,a);
      if(!flag){
          //means pichle wale ko skip ni kiya hai
          ans=max(ans,solve(i+1,1,n,a));
      }
      return dp[i][flag]=ans;
  }
    long long findMaxSubsetSum(int n, vector<int>&a) {
        dp=vector<vector<long long>>(n+1,vector<long long>(2,-1));
        return solve(0,0,n,a); 
    }
};
