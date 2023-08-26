class Solution{
  public:
    bool isKPartitionPossible(int nums[], int n, int k)
    {
         //Your code here
        int sum =0;
        for(int i=0; i<n; i++)
            sum+= nums[i];
        if (sum % k != 0) return false; 
        // Check if total sum is divisible by k

        sum /= k; // Calculate the target sum for each subset
        vector<int> dp((1 << n) + 1, -1); 
        // dp[i] represents remaining sum needed to reach 'sum' in subset represented by bitmask i
        dp[0] = 0; // Initializing the empty subset with remaining sum of 0

        for (int i = 0; i < (1 << n); i++) 
        { 
            // Iterate through all possible subsets
            if (dp[i] == -1) 
                continue; // Skip subsets that are not achievable

            for (int j = 0; j < n; j++) 
            { // Iterate through all elements in nums array
                int isNumNotInSubset = ((i & (1 << j)) == 0); 
                // Check if ele j is not included in subset represented by bitmask i
                if (isNumNotInSubset) {
                    if (dp[i] + nums[j] <= sum) { 
                        // Check if adding nums[j] to the subset not exceed target sum
                        int newSubset = i | (1 << j); 
                        // Create a new subset bitmask by adding the j-th element
                        dp[newSubset]= (dp[i] + nums[j])== sum ? 0 : (dp[i] + nums[j]);                         // Update dp for the new subset
                    }
                }
            }
        }

        return dp[(1 << n) - 1] == 0; 
    }

};
