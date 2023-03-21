class Solution{
public:
    int minimumTime(int n,int cur,vector<int> &pos,vector<int> &time){
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
            mn=min(mn,abs(pos[i]-cur)*time[i]);
        
        return mn;
    }
};

