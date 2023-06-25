class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
     int missingNumber(int arr[], int n) 
    { 
         set<int>st(arr, arr+n);
         int start= *(st.begin());
         int end=*(st.end());
         
         for( int i=1; i<=n; i++){
                if(st.find(i)!=st.end()){
                    continue;
                }
                else{
                    return i;
                }
             }
         return n+1;
    } 
};
