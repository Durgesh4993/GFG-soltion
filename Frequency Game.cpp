class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }


        int mini=INT_MAX;
        int ans=-1;
        for(auto k:m){
            if(k.second<mini){
                ans=k.first;
                mini=k.second;
            }
            else if(k.second==mini && k.first>ans){
                ans=k.first;
            }
        }


        return ans;
    }
};
