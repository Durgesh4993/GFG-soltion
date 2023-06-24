class Solution{
public:
    static bool cmp (string a, string b){
        string s1 = a + b;
        string s2 = b + a;
        
        if(s1 > s2) return true;
        else return false;
    }
    
	string printLargest(vector<string> &arr) {
        sort (arr.begin(), arr.end(), cmp);
        string ans = "";
        for(auto s:arr){
            // cout<<s<<endl;
            ans += s;
        }
        return ans;
	}
};
