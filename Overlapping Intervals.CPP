class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> v;
         stack<int> s;
         sort(intervals.begin(),intervals.end());
         s.push(intervals[0][0]);
         s.push(intervals[0][1]);
         for(int i=1;i<intervals.size();i++){
             int first = intervals[i][0];
             int second = intervals[i][1];
             if(first<=s.top() && second<=s.top()){
                 continue;
             }else
             if(first<=s.top()){
                 s.pop();
                 s.push(second);
             }else{
                 s.push(first);
                 s.push(second);
             }
         }
         while(!s.empty()){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            v.push_back({b,a});
         }
         sort(v.begin(),v.end());
         return v;
    }
};
