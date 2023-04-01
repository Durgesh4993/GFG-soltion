class Solution {
  public:
    long long int minOperations(int N) {
        if(N%2==1) // Odd Number
        {
            return (N/2)*1LL*(N/2+1);
        }
        else // Even Number
        {
            return (N*1LL*N)/4;
        }
        return 0;
    }
};
