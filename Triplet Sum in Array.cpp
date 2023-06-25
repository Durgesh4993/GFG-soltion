class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int x)
    {
        //Your Code Here
        
        //1 4 6 8 10 45
        //1 2 3 4 6
    sort((A), A + n);
        for(int i=0;i<n-1;i++){
            int low=i+1;
            int high=n-1;
            int sum=0;
            
            while(low<high){
                sum=A[i]+A[low]+A[high];
                
                if (sum==x)return true;
                else if(sum<x)low++;
                else high--;
                
            }
            
        }
        
        
        return false;
        
    }

};
