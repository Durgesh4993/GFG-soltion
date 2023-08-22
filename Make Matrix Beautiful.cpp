class Solution
{
    public:
int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int rowmax=0, colmax=0, maxi=0;
        for(int i=0; i<n; i++){
            int rowsum=0, colsum=0;
            for(int j=0; j<n; j++){
                rowsum+=matrix[i][j];
                colsum+=matrix[j][i];
            }
            rowmax=max(rowmax, rowsum);
            colmax=max(colmax, colsum);
        }
        
        maxi=max(rowmax, colmax);
        
        int ops=0;
        for(int i=0; i<n; i++){
            int rowsum=0, colsum=0;
            for(int j=0; j<n; j++){
                rowsum+=matrix[i][j];
                colsum+=matrix[j][i];
            }
            if(rowmax>colmax){
                ops+=(rowmax-rowsum);
            }else{
                ops+=(colmax-colsum);
            }
        }
        return ops;
    }

};
