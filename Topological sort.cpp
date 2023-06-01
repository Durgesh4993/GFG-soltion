class Solution
{
    public:
    //Function to return list containing vertices in Topological order. 
    void topological(vector<int> adj[] , int v, int i , vector<int>&ans , vector<int>&visited , stack<int>&st)
    {
        visited[i] = 1;
        for(auto neighbors : adj[i])
        {
            if(visited[neighbors] == 0)
                topological(adj , v , neighbors , ans , visited , st);
        }
        st.push(i);
    }
    
    vector<int> topoSort(int V, vector<int> adj[]) 
    {
        vector<int> visited(V , 0);
        vector<int> ans;
        stack<int> st;
        
        for(int i = 0;i<V;i++)
        {
            if(!visited[i])
            {
                topological(adj , V , i , ans , visited , st);
            }
        }
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};

