class Solution {
  public:
    int noConseBits(int n) {
        vector<int> a;
        while(n)
        {
            a.push_back(n&1);
            n>>=1;
        }
        reverse(a.begin(),a.end());
        int c = 0;
        n = a.size();
        int i=0;
        while(i<n)
        {
            if(a[i]==1) c++;
            else c=0;
            if(c==3)
            {
                a[i] = 0;
                c = 0;
            }
            i++;
        }
        n = 0;
        for(auto &x:a)
        {
            n<<=1;
            n+=x;
        }
        return n;
    }
};
