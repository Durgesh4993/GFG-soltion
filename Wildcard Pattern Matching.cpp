class Solution{
  public:
/*You are required to complete this method*/
  int solve(string p,string s,int i,int j,vector<vector<int>>&dp){
    if(i==0 && j==0)return 1;
    if(j>0 && i==0)return 0;
    if(j==0 && i>0){
        for(int k=i-1;k>=0;k--){
            if(p[k]!='*')return 0;
            
        }
        return 1;
       
    }
    if(dp[i][j]!=-1)return dp[i][j];
    if(p[i-1]==s[j-1] || p[i-1]=='?')   return dp[i][j]=solve(p,s,i-1,j-1,dp);
    else if(p[i-1]=='*')return dp[i][j]=(solve(p,s,i,j-1,dp) || solve(p,s,i-1,j,dp));
        else return dp[i][j]=0;
}
    int wildCard(string p,string s){
       
     
        // int j=p.length();
        // int i=s.length();
        vector<vector<int>>dp(201,vector<int>(201,-1));
        return solve(p,s,p.length(),s.length(),dp);
    }


};
