class Solution {

public:

    vector<int> findMaxRow(vector<vector<int>> mat, int N) {

        int mxI=0;

        int mxN=0;

        for(int i=0;i<N;i++)

        {

            int index=lower_bound(mat[i].begin(),mat[i].end(),1)-mat[i].begin();

            if(N-index>mxN)

            {

                mxN=N-index;

                mxI=i;

            }

        }

        return {mxI,mxN};

    }

 

};
