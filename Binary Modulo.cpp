class Solution{
    public:
        int modulo(string s,int m)
        {
            int ans=0,temp=1,i=s.size()-1;
            while(i>=0){
                if(s[i--]=='1')ans=(ans+temp)%m;
                temp=(temp*2)%m;
            }return ans;
        }
};
