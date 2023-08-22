class Solution{
public:
    long long findNth(long long N)
    {
        // code here.
        long long ans = 0,
                  multiplier = 1;
                  
        while (N) {
            ans += (N%9) * multiplier;
            N /= 9;
            multiplier *= 10;
        }
        
        
        return ans;
    }
};
