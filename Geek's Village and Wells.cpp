class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        vector<vector<int>> grid(n, vector<int>(m,1e9));
        
        queue<pair<int,int>> q;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(c[i][j] == 'W') {
                    grid[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        
        int dr[4] = {0,0,1,-1};
        int dc[4] = {1,-1,0,0};
        
        auto isSafe = [&](int row, int col){
            return row >= 0 and col >= 0 and row < n and col < m and c[row][col] != 'N';
        };
        
        while(q.size()) {
            int sz = q.size();
            
            for(int p = 0; p < sz; p++) {
                int row = q.front().first, col = q.front().second; q.pop();
            
                for(int i = 0; i < 4; i++) {
                    int adjRow = row + dr[i], adjCol = col + dc[i];
                    
                    if(isSafe(adjRow,adjCol)) {
                        if(grid[adjRow][adjCol] > grid[row][col]+1) {
                            q.push({adjRow,adjCol});
                            
                            grid[adjRow][adjCol] = grid[row][col]+1;
                        }
                    }
                }
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(c[i][j] == 'H') {
                    if(grid[i][j] == 1e9)grid[i][j] = -1;
                    else grid[i][j] *= 2;
                }
                else if(c[i][j] == 'N' or c[i][j] == '.') grid[i][j] = 0;
            }
        }
        
        return grid;
    }

};
