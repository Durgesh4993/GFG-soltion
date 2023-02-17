class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
// code here 
        vector<int> ans; 
        
        int count = 0; 
        int total = r*c; // total number of elements
        
        // index intialization 
        int startingRow = 0; 
        int startingCol = 0; 
        int endingRow = r - 1; 
        int endingCol = c - 1; 
        
        while (count < total)
        {
            // traversing starting row 
            for (int index = startingCol; count < total && index <= endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]); 
                count++;
            }
            startingRow++; 
            
            // traversing ending column 
            for(int index = startingRow; count < total && index <= endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]); 
                count++; 
            }
            endingCol--; 
            // traversing ending Row
            for (int index = endingCol; count < total && index >= startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]); 
                count++; 
            }
            endingRow--; 
            
            // traversing first column
            for(int index = endingRow; count < total && index >= startingRow; index--)
            {
                ans.push_back(matrix[index][startingCol]); 
                count++; 
            }
            startingCol++; 
            
        }
        return ans; 
    }
};
