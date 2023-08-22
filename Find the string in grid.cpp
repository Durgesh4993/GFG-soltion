class Solution {
public:
bool check(vector<vector<char>> &grid,int dr[],int dc[],int &n,int &m,int x,int y, string &word,int &k){
        if(grid[x][y]!=word[0])return false;
        for(int p=0;p<8;p++){
            int f=1;
            for(int i=1;i<k;i++){
                int nx=x+i*dr[p],ny=y+i*dc[p];
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==word[i])continue;
                else {f=0;break;}
            }
            if(f)return true;
        }
        return false;
    }
    vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
        // Code here
        int n=grid.size(),m=grid[0].size(),k=word.size();
        vector<vector<int>> ans;
        int dr[]={0,1,0,-1,1,1,-1,-1};
        int dc[]={1,0,-1,0,1,-1,1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(check(grid,dr,dc,n,m,i,j,word,k)){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
