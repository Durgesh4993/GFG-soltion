class Solution{
    public:
    void findPath(vector<vector<int>>&board,vector<string>&res,string s,vector<int>dx,vector<int>dy,vector<char>dir,int n,int row,int col){
       if(row==n-1 && col==n-1){
           res.push_back(s);
           return;
       }
       for(int i=0;i<4;i++){
           if(board[row][col]){
               board[row][col]=0;
               if(row+dx[i]>=0 && col+dy[i]>=0 && row+dx[i]<n && col+dy[i]<n && board[row+dx[i]][col+dy[i]]==1){
                
                 findPath(board,res,s+dir[i],dx,dy,dir,n,row+dx[i],col+dy[i]);
                 
               }
             board[row][col]=1;
           }
       }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>res;
        vector<char>dir({'D','U','R','L'});
        vector<int>dx({1,-1,0,0});
        vector<int>dy({0,0,1,-1});
        findPath(m,res,"",dx,dy,dir,n,0,0);
        sort(res.begin(),res.end());
        return res;
    }
};

