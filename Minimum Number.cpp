class Solution{
public:
   int minimumNumber(int n,vector<int> &arr){
        // Code here
        int gcd=0;
        
        for(int i=0;i<n;i++)
        {
            gcd= __gcd(gcd,arr[i]);
            
        }
        return gcd;
        
    }
};
