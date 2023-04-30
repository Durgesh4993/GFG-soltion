class Solution {
  public:
    long long ans;
    pair<long long,long long> dfs(int node,unordered_map<int,vector<int>> &child,vector<int> &A)//pair first min,second max
    {
        if(child.find(node)==child.end())
        {

            ans=max(ans,(long long)A[node]);

            return {A[node],A[node]};

        }

        long long mini=LONG_LONG_MAX,maxi=LONG_LONG_MIN;

        for(int i:child[node])

        {

            pair<long long,long long> val=dfs(i,child,A);

            mini=min(mini,val.first);

            maxi=max(maxi,val.second);

        }

        ans=max(ans,maxi);

        ans=max(ans,A[node]-mini);

        return {A[node]-maxi,A[node]-mini};

    }

    long long bestNode(int N, vector<int> &A, vector<int> &parent) {

        ans=LONG_LONG_MIN;

        unordered_map<int,vector<int>> child;

        

        int root;

        for(int i=0;i<N;i++)

        {

            if(parent[i]==-1)

            {

                root=i;

            }

            else

            {

                child[parent[i]-1].push_back(i);

            }

        }

        pair<long long,long long> val=dfs(root,child,A);

        ans=max(ans,val.second);

        return ans;

    }
};
