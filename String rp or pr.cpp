class Solution{   
public:
   long long remove(string &s, string r, int x) {
        long long i = 0, ans = 0; // `i` is write pointer, `j` is read pointer. 
        for (int j = 0; j < s.size(); ++j) {
            s[i++] = s[j];
            if (i>=2 && s[i-2] == r[0] && s[i-1] == r[1]) i -= 2, ans += x; 
            // We keep removing pattern string `r` 
            //    when `r` shows up in the end of written part.
        }
        s.resize(i);
        return ans;
    }
    long long solve(int x,int y,string s){
      //code here
        int N = s.size();
        string a = "pr", b = "rp";
        if (x < y) swap(a, b), swap(x, y);
        return remove(s, a, x) + remove(s, b, y);
    }
};
