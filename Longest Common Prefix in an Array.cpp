class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
       string ans;
       int i=-1;
        for(char ch:arr[0] ){
            i++;
            int n=1;
            while(n<N){
               if( ch!=arr[n][i])
               {    if(ans=="")
                    return "-1";
                return ans;
               }n++;
            }ans+=ch;
        }
        return ans;
    }
};
