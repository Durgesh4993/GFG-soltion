class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        vector<pair<int,int>>p;
        for(int i=0;i<N;i++){
            p.push_back({start[i],1});
            p.push_back({end[i],-1});
        }
        sort(p.begin(),p.end());
        int ans=1;
      
        for(int i=1;i<p.size();i++){
            p[i].second+=p[i-1].second;
            ans=max(ans, p[i].second);
        }
        return ans;
    }
};
