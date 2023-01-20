class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      vector<int>graph[N];
      for(int i =0;i<N;i++)
      {
          if(Edge[i] != -1)
          {
              graph[i].push_back(Edge[i]);
          }
      }
      vector<int>indegree(N,0);
      vector<int>vis(N,0);
      for(int node = 0; node < N; node++)
      {
          for(auto adjNode : graph[node])
          {
              indegree[adjNode] += node;
          }
      }
      
      int maxi = INT_MIN;
      int idx = -1;
      
      for(int i = 0; i<N;i++)
      {
          if(indegree[i] > maxi )
          {
              maxi = indegree[i];
              idx = i;
          }
          if(indegree[i] == maxi )
          {
              idx = i;
          }
      }
      return idx;
  }
};
