class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 

    {

        // Code here

        int n = grid.size();

        vector<vector<int>> dist(n,vector<int>(n,1e9));

         vector<vector<int>> vis(n,vector<int>(n,0));

        dist[0][0] = grid[0][0];

        priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

        

        pq.push({grid[0][0],{0,0}});

        vis[0][0] = 1;

        

        int dx[] = {0, 1, 0, -1};

        int dy[] = {1, 0, -1, 0};

        

        while(!pq.empty())

        {

            auto f = pq.top();

            pq.pop();

            

            int x = f.second.first;

            int y = f.second.second;

            

            int wt = f.first;

            vis[x][y] = 1;

            

            for(int i = 0; i<4; i++)

            {

                int nx = x + dx[i];

                int ny = y + dy[i];

                

                if (nx>=0 && nx<n && ny>=0 && ny<n && vis[nx][ny] == 0 && dist[nx][ny] > (dist[x][y] + grid[nx][ny]))

                {

                    dist[nx][ny] = (dist[x][y] + grid[nx][ny]);

                    pq.push({dist[nx][ny],{nx,ny}});

                }

            }

        }

        return dist[n-1][n-1];

    }
};
