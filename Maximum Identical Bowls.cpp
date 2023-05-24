class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        if(N == 1)
            return 1;
        long long sum = 0;
        for(auto elem: arr)
            sum += elem;
        while(N != 0 && sum % N-- != 0);
        return N + 1;
    }
};
