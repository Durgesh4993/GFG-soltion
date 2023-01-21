int minVal(int a, int b) {

        // code here

        vector<int> v;

        int cnt=0;

        for(int i=0;i<32;i++){

            if((a & (1<<i)) !=0){

                v.push_back(1);

            }

            else{

                v.push_back(0);

            }

            if((b & (1<<i))!=0) cnt++;

        }

        

        vector<int> res;

        for(int i=32;(i>=0) && (cnt!=0);i--){

            if(v[i]==1){

                res.push_back(i);

                cnt--;

            }

        }

        

        for(int i=0;(i<32) &&(cnt!=0);i++){

            if(v[i]==0){

                res.push_back(i);

                cnt--;

            }

        }

        

        int ans=0;

        for(int i=0;i<res.size();i++){

            ans=(ans^(1<<res[i]));

        }

        return ans;

    }
