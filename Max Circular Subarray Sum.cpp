class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
 int maxSubarraySum(int arr[], int n){
        int answer=0;
        int ma=INT_MIN;
        for(int i=0;i<n;i++){
            answer+=arr[i];
            if(answer>ma){
                ma=answer;
            }
            if(answer<0){
                answer=0;
            }
        }
        return ma;
    }
    int circularSubarraySum(int arr[], int num){
        
        int NSum=maxSubarraySum(arr,num);
        if(NSum<0)return NSum;
        int tsum=0;
        for(int i=0;i<num;i++){
            tsum+=arr[i];
            arr[i]=-arr[i];
        }
        int res=tsum+maxSubarraySum(arr,num);
        return max(NSum,res);
    }

};
