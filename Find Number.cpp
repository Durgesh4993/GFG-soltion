class Solution{
public:
    long long findNumber(long long N){
        // Code here
        long long ans=0,num =1;
        vector<int>v={9,1,3,5,7};
        while(N!=0)
        {ans+=v[N%5]*num;
       if(N%5==0)
       {N=N/5-1;}
       else{N=N/5;}
        
            num*=10;
        }return ans;
    }
};
