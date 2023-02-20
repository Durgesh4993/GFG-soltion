class Solution {
  public:
    long long int minIncrements(vector<int> arr, int n) {
        
        sort(arr.begin(), arr.end());
        
        long long int temp = 0;
        long long int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > temp)
            {
                temp = arr[i]+1;
            }
            else if(arr[i] <= temp)
            {
                count += (temp - arr[i]);
                temp++;
            }
        }
        
        return count;
    }
};
