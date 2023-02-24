class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
            int ans[n+m] ;
        
        int i = 0 ; 
        int j = 0 ; 
        int l = 0;
        
        while( i<n && j<m){
            if( arr1[i] < arr2[j]){
                ans[l++] = arr1[i++];
            }else{
                ans[l++] = arr2[j++];
            }
        }
        
        while(i<n){
            ans[l++] = arr1[i++];
        }
        while(j<m){
            ans[l++] = arr2[j++];
        }
        
        return ans[k-1];
    }
};
