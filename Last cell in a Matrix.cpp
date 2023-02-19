class Solution{
    public:
char getNextMove(char ch)
{
    //to get clockwise movement
    if(ch == 'R')
      return 'D';
      else if(ch == 'L')
       return 'U';
       else if(ch == 'U')
       return 'R';
       else if(ch == 'D')
       return 'L';
       
     return -1;
}

pair<int,int> getOut(int row, int col, char currMove, vector<vector<int>>& matrix, int R, int C, map< char, pair<int,int> >& move)
{
    //base case
    if(col < 0)
       return {row,0};
    else if(row < 0)
       return {0,col};
    else if(row == R)
       return {R-1,col};
    else if(col == C)
       return {row,C-1};
       
    if(matrix[row][col] == 0)
    {
        int i = move[currMove].first;
        int j = move[currMove].second;
        return getOut(row+i,col+j,currMove,matrix,R,C,move);
    }
    
    if(matrix[row][col] == 1)
    {
        matrix[row][col] = 0;
        char nextMove = getNextMove(currMove);
        int i = move[nextMove].first;
        int j = move[nextMove].second;
       return getOut(row+i,col+j,nextMove,matrix,R,C,move);
    }
}
    
pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
map< char, pair<int,int> > move;
move['R'] = {0,1};
move['L'] = {0,-1};
move['U'] = {-1,0};
move['D'] = {1,0};
    return getOut(0,0,'R',matrix,R,C,move);
    }
};
