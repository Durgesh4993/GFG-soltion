class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        int i;
        long long mx=n; 
        for(i=0;i<n;i++){
            arr[i]=arr[i]+(arr[arr[i]]%mx)*mx;
        }
        for(i=0;i<n;i++){
            arr[i]/=mx;
        }
    }
};
