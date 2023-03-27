class Solution{
    
    public:
    
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    
    long long find(int n, long k)
    {
        long long l, r = n-1, ans = 0;
    
        while (r >= 0 && k >= 1)
        {
            long long ind = 0, tmp;
            l = 0;
            
            while (l <= r)
            {
                long long mid = l + (r - l) / 2;
                long long mid_val = shop.get(mid);
                if (mid_val <= k)
                {
                    ind = mid;
                    tmp = mid_val;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
    
            ans += k / tmp;
            k = k % tmp;
    
            r = ind - 1;
        }
    
        return ans;
    }
};
