class Solution{
public:
     int minCost(vector<vector<int>> &cost) {

        int n=cost.size();

        int k=cost[0].size();

        

        if(n==0 || k==0)

        return -1;

        

        if(k==1)

        {

            if(n==1)

            return cost[0][0];

            else

            return -1;

        }

        else

        {

            pair<int,int> mini={INT_MAX,-1};

            pair<int,int> mini2={INT_MAX,-1};

            

            for(int i=0;i<k;i++)

            {

                if(cost[0][i]<mini.first)

                {

                    mini2=mini;

                    mini={cost[0][i],i};

                }

                else if(cost[0][i]<mini2.first)

                {

                    mini2={cost[0][i],i};

                }

            }

            

            

            for(int i=1;i<n;i++)

            {

                pair<int,int> curr={INT_MAX,-1};

                pair<int,int> curr2={INT_MAX,-1};

                

                for(int j=0;j<k;j++)

                {

                    int temp=cost[i][j];

                    

                    if(j!=mini.second)

                    {

                        temp+=mini.first;

                    }

                    else

                    {

                        temp+=mini2.first;

                    }

                    

                    if(temp<curr.first)

                    {

                        curr2=curr;

                        curr={temp,j};

                    }

                    else if(temp<curr2.first)

                    {

                        curr2={temp,j};

                    }

                }

                

                mini=curr;

                mini2=curr2;

            }

            

            return mini.first;

        }

    }
};
