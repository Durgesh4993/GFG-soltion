class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
   vector<vector<int> > stockBuySell(vector<int> arr, int n){
        // code here
        vector<vector<int>> ans;
        int i=0;
        int j=i+1;
        int index=i;
        while(j<n){
            if(arr[j]>arr[index]){
                index=j;
                j++;
            }else if(arr[j]<=arr[index]){
                if(index>i){
                    ans.push_back({i,index});
                }
                i=j;
                j++;
                index=i;
            }
            if(j==n){
                if(index>i){
                    ans.push_back({i,index});
                }
            }
        }
        return ans;
    }


};
