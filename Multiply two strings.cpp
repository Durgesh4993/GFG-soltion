class Solution{
  public:
string multiplyStrings(string S1, string S2) {
       //Your code here
       reverse(S1.begin(),S1.end());
       reverse(S2.begin(),S2.end());
       int sign=1;
       if(S1.back()=='-'){sign*=-1;S1.pop_back();}
       if(S2.back()=='-'){sign*=-1;S2.pop_back();}
       while(S1.back()=='0' && S1.size()>1)S1.pop_back();
       while(S2.back()=='0' && S2.size()>1)S2.pop_back();
       string ans="";
       int carry,l,r,prod;
       for(int i=0;i<S2.length();i++){
           string p(i,'0');
           carry=0;l=S2[i]-'0';
           for(auto it:S1){
               r=it-'0';
               prod=l*r+carry;
               carry=prod/10;
               p+=char(prod%10 + 48);
           }
           while(carry)p+=(carry%10 + 48),carry/=10;
           for(int j=0;j<p.length();j++){
               if(j==ans.length()){
                   ans += '0';
               }
               r=p[j]-'0'+carry+ans[j]-'0';
               ans[j]=char(r%10 + 48);
               carry=r/10;
           }
           while(carry)ans+=(carry%10 + 48),carry/=10;
       }
       if(sign==-1)ans+='-';
       reverse(ans.begin(),ans.end());
       return ans;
    }



};
