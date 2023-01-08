class Solution{
    public:
    vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)

    {

        vector<pair<int,int>> ans;

        set<int> mp;

        for(int i=0;i<n;i++){

            mp.insert(a[i]);

        }

        for(int i=0;i<m;i++){

            if(mp.find(x-b[i])!=mp.end()){

                ans.push_back({x-b[i],b[i]});

            }

        }

        sort(ans.begin(),ans.end());

        return ans;

    }
};
