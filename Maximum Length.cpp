class Solution {
public:
  int solve(int a, int b, int c) {
        return 2*(a+b+c-max(a,max(b,c))+2)<max(a,max(b,c))?-1:a+b+c;
    }
};
