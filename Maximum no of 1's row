class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)

        {

            pair<int,int>ans={0,0};

            int count=0;

            int i=M-1;

            for(int j=0;j<N;j++){

            while(i>=0 && Mat[j][i]){

                if(Mat[j][i]==1)

                count++;

                

                    if(count>ans.first){

                        ans={count,j};}

                i--;

                

            }

        

        }

        return ans.second;

        

        }
};
