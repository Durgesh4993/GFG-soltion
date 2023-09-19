class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        map<long long ,long long> mp ;       
        for(int i = 0; i< n ; i++)
        {    
            mp[arr[i]%k]++ ;
        }       
        long long ans = 0;      
        for(auto it : mp)
        {
            int cnt = it.second -1 ;
            
            ans += cnt*(cnt+1)/2 ;
        }        
        return ans ;
    }
};
