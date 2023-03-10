class Solution{
public:

	// Function to find maximum product subarray
 long long maxProduct(vector<int> arr, int n) {

     long long ans = arr[0];

     long long ma = ans;

     long long mi = ans;

     for(int i=1; i<n; i++){

         if(arr[i]<0){

             swap(ma,mi);

         }

          ma = max((long long) arr[i],ma*arr[i]);

          mi = min((long long) arr[i],mi*arr[i]);

          ans = max(ma,ans);

     }

     return ans;

 }

 

};
