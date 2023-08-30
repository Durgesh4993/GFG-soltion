class Solution
{
    public:
        map<string,bool> m;
        vector<string> v;
        void recur(string str,vector<vector<int>>& dp,int row,int col,int num,string s,string t)
        {
            if(num==0)
            {
                reverse(str.begin(),str.end());
                if(m[str]==false)
                {
                    v.push_back(str);
                    m[str]=true;
                }
                return;
            }
            for(int i=row;i>=0;i--)
            {
                for(int j=col;j>=0;j--)
                {
                    if(dp[i][j]<num)
                    break;
                    if(dp[i][j]==num && t[i-1]==s[j-1])
                    {
                       // flag=true;
                        recur(str+t[i-1],dp,i-1,j-1,num-1,s,t);
                    }
                }
            }
        }
        vector<string> all_longest_common_subsequences(string s, string t)
        {
            // Code here
            int r=t.length();
            int c=s.length();
            vector<vector<int>> dp(r+1,vector<int>(c+1));
            for(int i=0;i<r+1;i++)
            {
                dp[i][0]=0;
            }
            for(int i=0;i<c+1;i++)
            {
                dp[0][i]=0;
            }
            for(int i=1;i<r+1;i++)
            {
                for(int j=1;j<c+1;j++)
                {
                    if(t[i-1]==s[j-1])
                    {
                        dp[i][j]=1+dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            vector<pair<int,int>> posi;
            for(int i=1;i<r+1;i++)
            {
                for(int j=1;j<c+1;j++)
                {
                    if(dp[i][j]==dp[r][c] && t[i-1]==s[j-1])
                    {
                        posi.push_back({i,j});
                    }
                }
            }
            int len=dp[r][c];
            for(auto x:posi)
            {
                
                int i=x.first,j=x.second;
                string str(1,t[i-1]);
              //  cout<<str<<" "<<t[i-1]<<endl;
                recur(str,dp,i-1,j-1,len-1,s,t);
            }
            sort(v.begin(),v.end());
            return v;
        }
};
