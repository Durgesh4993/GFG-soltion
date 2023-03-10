class Solution {

  public:

    long long maxTripletProduct(long long arr[], int n)

    {

     sort(arr,arr+n);

     

     long long p1 = arr[0]*arr[1]*arr[n-1]; // two negative number 

     

     long long p2 = arr[n-1]*arr[n-2]*arr[n-3]; // all poisitive number

     

     return max(p1,p2);

    }
};
