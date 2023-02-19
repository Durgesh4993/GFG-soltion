int solve(int N, int K, vector<int> &arr) {
        // code here
        int sum=0;
        vector<int>pre(N,0);
        for(int i=0;i<N;i++){
            sum+=arr[i];
            pre[i]=sum;
        }
        vector<int>divisors;
        for(int i=1;i*i<=sum;i++){
            if(sum%i==0){
                divisors.push_back(i);
                if(i!=sum/i){
                    divisors.push_back(sum/i);
                }
           }
        }
        int ans=1;
        for(auto d:divisors){
            int partions=0;
            for(int i=0;i<N;i++){
                if(pre[i]%d==0){
                    partions++;
                }
                if(partions>=K){
                    ans=max(ans,d);
                }
            }
        }
        return ans;
    }
