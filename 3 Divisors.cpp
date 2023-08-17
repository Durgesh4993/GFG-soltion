 vector<int> threeDivisors(vector<long long> query, int q)

    {
        vector<int> ans(q, 0);
     
        long long maxE = 0;
        
        for(auto &e : query){
         
            maxE = max(maxE, e);
         
        }
        vector<int> isPrime ( maxE + 1, 1);
        isPrime[0] = 0;
        isPrime[1] = 0;
        for(int i = 2; i <= maxE; i++){
            if(isPrime[i] == 1){
                for(int j = i*2; j <= maxE; j += i){
                    isPrime[j] = 0;
                }
                isPrime[i] = isPrime[i - 1] + 1;
            }
            else{
                isPrime[i] = isPrime[i - 1];
                
            }
        }

        for(int i = 0; i < q; i++){
            long long val = sqrt(query[i]);
            ans[i] = isPrime[val];
        }
        return ans;
    }
