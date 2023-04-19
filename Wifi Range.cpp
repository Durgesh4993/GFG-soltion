class Solution{
    public:
    bool wifiRange(int n, string s, int x){
        int p = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                if(p >= max(i - x - 1,-1))
                    p = min(n - 1,i + x);
        }
        return p == n - 1;
    }
};
