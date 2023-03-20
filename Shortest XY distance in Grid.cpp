class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int n, int m) {
        vector<vector<int>> vis(n, vector<int> (m, 0));
        queue<pair<pair<int,int>, int>> q;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 'X') {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        
        int mini = INT_MAX;
        int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
        
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            
            int x = p.first.first, y = p.first.second, dist = p.second;
            if(grid[x][y] == 'Y')
                mini = min(mini, dist);
            
            for(int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx >= 0 and ny >= 0 and nx < n and ny < m and !vis[nx][ny]) {
                    q.push({{nx, ny}, dist + 1});
                    vis[nx][ny] = 1;
                }
            }
        }
        
        return mini;
    }
};
