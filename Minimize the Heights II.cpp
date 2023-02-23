class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {

        // code here

         sort(arr , arr+n);

         int maxi = arr[n-1];

         int mini = arr[0];

         int ans = arr[n-1]-arr[0];

         for(int i = 1 ; i< n ; i++){

            if(arr[i]-k <0)

            continue;

             maxi = max(arr[i-1]+k , arr[n-1]-k);

             mini = min(arr[0]+k , arr[i] -k);

             

             ans = min(ans , maxi-mini);

         }

         

         return ans;

    }
};
