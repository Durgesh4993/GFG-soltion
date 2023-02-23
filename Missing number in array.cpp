class Solution{
  public:
   int MissingNumber(vector<int>& array, int n) {

        int expected_sum = n*(n+1)/2;

        int sum = 0;

        for (vector<int>::iterator it = array.begin(); it != array.end(); it++) {

            sum += *it;

        }

        return (expected_sum - sum);

    }
};
