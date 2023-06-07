class Solution {
  public:
   vector<int> leastPrimeFactor(int n) 
    {
        vector<int>ans;
        ans.push_back(0);
        ans.push_back(1);
        if(n==1)
        {
            return ans;
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    ans.push_back(j);
                    break;
                }
            }
        }
       return ans;
    }
};
