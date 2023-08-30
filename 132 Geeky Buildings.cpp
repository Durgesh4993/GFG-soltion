class Solution{
public:
    bool recreationalSpot(int arr[], int n){
        if(n<3)return 0;
        int maxi=arr[1];
        int mini=arr[0];
        for(int i=2;i<n;i++){
            if(arr[i]<maxi && arr[i]>mini)return true;
             maxi=max(arr[i],maxi);
            if(mini>arr[i-1] && arr[i-1]!=maxi)mini=arr[i-1];
        }
        return false;
    }
};
