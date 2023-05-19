class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
       

    sort(range.begin(),range.end());


       vector<int>ans;


       int start=range[0][0];
       int end=range[0][1];
       
       vector<pair<int,int>>value;


       
       for(int i=1;i<n;i++){
           if(end>=range[i][0])
           end=max(end,range[i][1]);
           else{
               value.push_back({start,end});
               start=range[i][0];
               end=range[i][1];
           }
       }
       value.push_back({start,end});

       for(int i=0;i<q;i++){
           int num=queries[i];
           int flag=0;
           for(int j=0;j<value.size();j++){
               if(num<=value[j].second-value[j].first+1){
                   ans.push_back(value[j].first+num-1);
                   flag=1;
                   break;
               }
               else{
                   num-=value[j].second-value[j].first+1;
               }
           }
           if(!flag)
           ans.push_back(-1);
       }
       
       
       return ans;
    } 

};
