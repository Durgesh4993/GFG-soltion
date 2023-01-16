class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        vector<long long int> res(n);
        stack<long long int> st;
        for(int i=n-1;i>=0;i--){
            int r=-1;
            while((!st.empty())&&arr[st.top()]<=arr[i]) st.pop();
            if(!st.empty()) res[i]=arr[st.top()];
            else res[i]=-1;
            st.push(i);
        }
        return res;
    }
};
