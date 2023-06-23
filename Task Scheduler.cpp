class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        map<char,int>m;
        for(auto it : tasks){
            m[it]++;
        }
        
        int maxi = INT_MIN;
        int maxc = 0;
        
        for(auto it : m){
            if(it.second > maxi)
                maxi = it.second;
        }
        
        int x = (maxi-1) * K;
        x += (maxi-1);
        
        for(auto it : m)
        {
            x -= min(maxi-1, it.second);
        }
        
        int result = tasks.size() + max(0, x);
        return result;
    }


};
