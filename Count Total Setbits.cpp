class Solution {
  public:
    long long countBits(long long n)
{
    long long res = 0;
    int l = log2(n);
    if((n&(n-1))==0) return (n/2)*l+1;
    while(n)
    {
        l = log2(n);
        if((n&(n-1))==0) return (res+(n/2)*l+1);
        int p = pow(2, l);
        res += (p/2)*l + 1;
        n = n-p;
        res += n;
    }
    return res;
}
};
