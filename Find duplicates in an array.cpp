class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        unordered_map<int,int> mp;
        vector<int> ans;
        bool flag=0;
        for(int i=0; i<n; i++) {
            mp[arr[i]]++;
        }
       
        for(auto x : mp) {
            if(x.second > 1) {
                ans.push_back(x.first);
                flag=1;
                
            }
        }
        sort(ans.begin(), ans.end());
        if(flag==1) return ans;
        else return {-1};
    }
};
