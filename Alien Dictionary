class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        unordered_map<int,vector<int>>adj;
        vector<int>indegree(K,0);
        for(int i=0;i<N-1;i++){
            string str1=dict[i],str2=dict[i+1];
            int size=min(str1.size(),str2.size());
            for(int j=0;j<size;j++){
                if(str1[j]!=str2[j]){
                    adj[str1[j]-'a'].push_back(str2[j]-'a');
                    indegree[str2[j]-'a']++;
                    break;
                }
            }
        }
        
        queue<int>q;
        
        for(int i=0;i<K;i++)
            if(!indegree[i])
                q.push(i);
        
        string ans="";
        while(q.size()){
            int node=q.front();
            q.pop();
            ans = ans+char(node+'a');
            for(auto it:adj[node]){
                indegree[it]--;
                if(!indegree[it])
                    q.push(it);
            }
        }
    return ans;
    }
};
