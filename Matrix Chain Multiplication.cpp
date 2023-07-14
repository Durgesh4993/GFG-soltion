class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        
        vector<vector<int>> dp(N, vector<int>(N, 0));
        
        for(int chainLen = 2; chainLen < N; chainLen++){
            for(int i = 1; i<N - chainLen + 1; i++){
                int j = i + chainLen - 1;
                
                dp[i][j] = INT_MAX;
                
                for(int k = i; k<j; k++){
                    int steps = arr[i-1] * arr[k] * arr[j] + dp[i][k] + dp[k+1][j];
                    
                    if(steps < dp[i][j]) dp[i][j] = steps;
                }
            }
        }
        
        return dp[1][N-1];
        
        
    }

};
