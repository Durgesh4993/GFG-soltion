class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end());
        vector<int> dp(n, -1);
        function<int(int,int)> dfs = [&](int idx, int end) {
        
            if (idx == n) return 0;
            if (intervals[idx][0] < end) return dfs(idx + 1, end);
            if (dp[idx] != -1) return dp[idx];
            return dp[idx] = max(intervals[idx][2] + dfs(idx + 1, intervals[idx][1]), dfs(idx + 1, end));
        };
        return dfs(0, 0);
    }
};
