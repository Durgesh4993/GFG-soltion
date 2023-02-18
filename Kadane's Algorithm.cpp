class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){

        

        // Your code here

    long long int current_sum =0; //jis me ma har bar sum add kar raha hu

    long long int maxi_sum =arr[0]; //this is ans that store 

    

    for(long long int i =0 ;i<n ;i++){ // i not 1

        current_sum +=arr[i];

        maxi_sum =max(current_sum, maxi_sum);

        if(current_sum <0){

            current_sum =0;

            }

    }

    return maxi_sum;

    }
};
