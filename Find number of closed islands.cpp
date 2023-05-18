class Solution {
    public:
    vector<vector<int>> mat;
    int rows, cols;
    vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    
    bool isValid(int row, int col) {
        return (row >= 0 && row < rows && col >= 0 && col < cols);
    }
    
    void dfs(int row, int col) {
        if(isValid(row, col) == false || mat[row][col] == 0) {
            return;
        }
        mat[row][col] = 0;
        for(auto dir: dirs) {
            int newRow = row + dir.first;
            int newCol = col + dir.second;
            dfs(newRow, newCol);
        }
    }
    
    int closedIslands(vector<vector<int>>& matrix, int rows, int cols) {
        mat = matrix;
        this->rows = rows, this->cols = cols;
        
        for(int col = 0; col < cols; col++) {
            dfs(0, col);
            dfs(rows-1, col);
        }
        
        for(int row = 0; row < rows; row++) {
            dfs(row, 0);
            dfs(row, cols-1);
        }
        
        int cnt = 0;
        for(int row = 1; row < rows-1; row++) {
            for(int col = 1; col < cols-1; col++) {
                if(mat[row][col]) {
                    cnt++;
                    dfs(row, col);
                }
            }
        }
        
        return cnt;
    }
};
