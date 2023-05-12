class Solution {
  public:
       int arrayOperations(int n, vector<int> &arr) {
        // code here
        int i=0,j=n-1,ans=0,f=0,g=0,h=0;
        while(arr[i]==0 && i<n){
            i++;
            g++;
        }
        while(arr[j]==0 && j>=i){
            j--;
            g++;
        }
        while(i<=j){
            while(arr[i]!=0 && i<=j){
                f=1;
                i++;
                h++;
            }
            ans++;
            while(arr[i]==0 && i<=j){
                i++;
                g++;
            }
        }
        //cout<<g;
        if(g==n) return 0;
        if(h==n) return -1;
        return ans;
    }
};
