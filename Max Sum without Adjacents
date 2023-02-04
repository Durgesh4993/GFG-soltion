class Solution{
public:	
	// calculate the maximum sum with out adjacent
int findMaxSum(int *arr, int n) {

     // code here

     vector<int>dp(n,0);

     dp[0]=arr[0];

     dp[1]=max(arr[0],arr[1]);

     for(int i=2;i<n;i++)

     {

         int take=arr[i]+dp[i-2];

         int nottake=dp[i-1];

         dp[i]=max(take,nottake);

     }

     return dp[n-1];

 }
};
