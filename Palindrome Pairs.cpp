class Solution{   
  public:
    // Function to check if a palindrome pair exists
    bool isPalindrome(string &s){
        int i=0;
        int j =s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--])
            return false;
        }
        return true;
    }
    bool palindromepair(int n, string arr[]) {
        // code here
        unordered_map<string,int>mp;
        
        for(int i=0; i<n;i++){
            auto s = arr[i];
            reverse(s.begin(),s.end());
            mp[s] =i;
        }
        
        for(int i=0; i<n;i++){
            for(int j =0; j<arr[i].size();j++){
                string s1 = arr[i].substr(0,j);
                string s2 = arr[i].substr(j);
                
                if(mp.count(s1) && isPalindrome(s2) && mp[s1]!=i)
                    return true;
                if(mp.count(s2) && isPalindrome(s1) && mp[s2]!=i)
                    return true;
                
            }
        }
        return false;
    }
};
