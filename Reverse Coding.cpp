class Solution {
  public:
    int sumOfNaturals(int n) {
        //here dividing by 2 doesn't works find mul. inverse of 2
        long long M=pow(10,9)+7;
        long long k= (((long long)n*(long long) (n+1))%M*500000004);
        return k%M;
    }
};
