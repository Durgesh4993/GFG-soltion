class Solution {
  public:
    void dfs (vector<vector<int>>& adj, int i, vector<int>&vis, vector<int>&temp)
    {
        temp.push_back(i);
        vis[i]++;
        
        for (auto it:adj[i])
        {
            if (!vis[it])
                dfs(adj,it,vis,temp);
        }
    }
    
    int findNumberOfGoodComponent(int v, vector<vector<int>>& adj) 
    {
        vector<int>vis(v+1,0);
        int ans = 0;
        for (int i=1; i<=v; i++)
        {
            if (!vis[i])
            {
                vector <int> temp;
                dfs(adj,i,vis, temp);
                
                bool flag = false;
                
                for (int i=0; i<temp.size(); i++)
                {
                    if (adj[temp[i]].size()<temp.size()-1)
                    {
                        flag = true;
                        break;
                    }
                }
                
                if (flag==false)
                    ans++;
            }
        }
        
        return ans;
        // code here
    }
};
