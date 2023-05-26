class Solution{
    public:
    //chinnu
    int helper(int num , int tar , int x,vector<vector<int>> &dp){
        if(tar == 0) return 1;
        if(tar<0) return 0;
        if(pow(num,x)>tar) return 0;
        
        if(dp[num][tar]!=-1) return dp[num][tar];
        
        
        int pick = 0;
        if(tar-pow(num,x)>=0){
         pick = helper(num+1 , tar-pow(num,x) , x,dp); //if we consider the element
        }
        int notpick = helper(num+1,tar , x,dp);  // not considering the element
        return dp[num][tar]=(pick + notpick) % (int)(1e9 + 7);
    }
    int numOfWays(int n, int x)
    {   vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        return helper(1,n,x,dp);
    }
};
