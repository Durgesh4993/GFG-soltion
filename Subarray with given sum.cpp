class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
   vector<int> subarraySum(vector<int>arr, int n, long long s)

    {

        long long sum = 0;

        for(int i_l = 0, i_r = 0; i_r < n ; i_r++) {

            sum += arr[i_r];

            while(sum > s and i_l < i_r)

                sum -= arr[i_l++];

            if(sum == s)

                return {i_l + 1, i_r + 1};

        }

        return {-1};

    }
};
