class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
          int count =0;
        for(int i=0; i<n/2; i++){
            if(arr[i]!=arr[n-1-i]){
                count++;
            }
        }
        return (count+1)/2;
    }
};
