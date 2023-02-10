class Solution{
public:
    int maxInstance(string s){
        vector<int> fre(26,0);
        for(int i=0;i<s.length();i++) {
            fre[s[i]-'a']++;
        }
        int m1=s.length(),m2=s.length();
        for(int i=0;i<26;i++) {
            if(i==0 || i==1 || i==13) {
                m1=min(m1,fre[i]);
            } else if(i==14 || i==11) {
                m2=min(m2,fre[i]);
            }
        }
        return min(m1,m2/2);
    }
};
