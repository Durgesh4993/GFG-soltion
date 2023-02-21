class Solution {

  public:
    long long int maxSumLCM(int n) 
    {
        // code here
         long long sum=0;

        for(int i=1;i<=sqrt(n);i++){

            if(n%i==0 && i!=sqrt(n)){

                sum+=n/i;

                sum+=i;

            }else if(n%i==0 && i==sqrt(n)) sum+=i;

        }

        return sum;
    }
};
