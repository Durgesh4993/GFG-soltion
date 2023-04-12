class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        int cnt=0;
        for(int i=n/2;i<n;i++)
            arr[i]=arr[i]*5;
        sort(arr.begin()+(n/2),arr.end());
        for(int i=0;i<n/2;i++)
        {
            int c=upper_bound(arr.begin()+(n/2),arr.end(),arr[i])-arr.begin();
            cnt+=(c-(n/2));
        }
        return cnt;
    }  
};
