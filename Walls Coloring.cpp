class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        vector<int> pink(N);
        vector<int> black(N);
        vector<int> yellow(N);
        pink[0] = colors[0][0];
        black[0] = colors[0][1];
        yellow[0] = colors[0][2];
        for(int i = 1; i < N; i++){
            pink[i] = colors[i][0]+min(black[i-1], yellow[i-1]);
            black[i] = colors[i][1]+min(pink[i-1], yellow[i-1]);
            yellow[i] = colors[i][2]+min(black[i-1], pink[i-1]);
        }
        return min({pink[N-1], black[N-1], yellow[N-1]});
    }
};
