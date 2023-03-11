class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &arr, vector<vector<int>> &Q) {
        // code here
        int maxx=INT_MIN;
        for(int i=0;i<N;i++){
            maxx=max(maxx,arr[i]);
        }
        vector<int>ans;
        vector<vector<int>>dp(N,vector<int>(maxx+1));
        for(int i=0;i<N;i++){
            int p=arr[i];
            dp[i][p]+=1;
            for(int j=i+1;j<N;j++){
                if(p==arr[j]){
                    dp[i][p]++;
                }
            }
        }
        for(int i=0;i<Q.size();i++){
            int s=Q[i][0],e=Q[i][1],k=Q[i][2];
            int cnt=0;
            for(int j=s;j<=e;j++){
                if(dp[j][arr[j]]==k){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
