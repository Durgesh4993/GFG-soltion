class Solution {
 public:

    // Function to detect cycle in a directed graph.

    bool isCyclic(int V, vector<int> adj[]) {

        // code here

        vector<int>vis(V, 0);

        vector<int>pvis(V, 0);

        for(int i=0; i<V; i++){

            if(!vis[i]){

                if(dfs(i,adj, vis, pvis))return true;

            }

        }

        return false;

    }

    private:    

        bool dfs(int i, vector<int>adj[], vector<int>&vis, vector<int>&pvis){

            vis[i]=1;

            pvis[i]=1;

            

            for(auto it: adj[i]){

                if(!vis[it]){

                    if(dfs(it, adj, vis, pvis))return true;

                }else{

                    if(pvis[it])return true;

                }

            }

            

            pvis[i]=0;

            return false;

        }
};
