class Solution

{

    public:

    vector<long long> nextLargerElement(vector<long long> arr, int n){

        // Your code here

        vector<long long> ans(n, -1);

        stack<long long> stk;

        stk.push(arr[n-1]);

        for (int i = n-2; i >= 0; i--)

        {

           while (!stk.empty() && stk.top() <= arr[i])

                stk.pop();

            

            if (!stk.empty())

                ans[i] = stk.top();

            stk.push(arr[i]);

        }

       return ans;

    }

};
