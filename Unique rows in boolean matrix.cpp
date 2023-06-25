class Solution
{
    public:
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        unordered_set<string> sett; // gives find function which is time optimised
        vector<vector<int>> ans;
        for(int i=0; i<row; i++){
            string temp;
            for(int j=0; j<col; j++){
                temp.push_back((char)(M[i][j]+48));
            }
            if(sett.find(temp)==sett.end()){ // == end mtlb nhi mila toh order of appearance ke liye ans mein push back krdo vector
                // we are sending only unique values 
            // so you might think that why we are using unoredered_set
            // we are using it to use find function of it as a hash of string not in sorted order
                vector<int> tmp(M[i], M[i]+col);
                ans.push_back(tmp);
                sett.insert(temp);
            }
        }
        return ans;
    }

};
