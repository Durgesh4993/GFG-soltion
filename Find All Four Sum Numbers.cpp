class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        set<vector<int>>stt;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int s=j+1,e=n-1;
                while(s<e){
                    int sum=arr[i]+arr[j]+arr[s]+arr[e];
                    if(sum==k){
                stt.insert({arr[i],arr[j],arr[s],arr[e]});
                    }
                    if(sum<k)s++;
                    else e--;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it:stt)ans.push_back(it);
        return ans;
    }
};
