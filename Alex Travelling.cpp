class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int k) {

        // code here

        vector<int> dist(n+1, 1e9);

        vector<pair<int,int>> adj[n+1];

        for(auto p:flights){

            adj[p[0]].push_back({p[1], p[2]}); // to node and cost

        }

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        dist[k]=0;

        pq.push({0, k}); 

        while(!pq.empty()){

            auto p=pq.top();

            pq.pop();

            int node=p[1];

            int d=p[0];

            for(auto child:adj[node]){

                int childnode=child.first;

                int childdist=child.second;

                

                if(dist[childnode]> d + childdist){

                    dist[childnode]=d + childdist;

                    pq.push({dist[childnode], childnode});

                }

            }

        }

        int maxi=0;

        for(int i=1;i<=n;i++){

            maxi=max(maxi, dist[i]);

            if(dist[i]==1e9)return -1;  // not visited

        }

        return maxi;

    }

};
