class Solution {
  public:
  vector<char>c={'+','-','*'};
  void fun(vector<string>&ans,int indx,string &S,int target)
  {
      
      int n=S.size();
      if(indx==n-1)
      {
         stack<char>op;
         stack<long long>num;
         for(int i=0;i<S.size();i++)
         {
             
             if(isdigit(S[i]))
             {
                 if(S[i]=='0')
                 {
                     if(i+1<n&&isdigit(S[i+1]))
                     return;
                 }
                 int val=0;
                 while(isdigit(S[i]))
                 {
                    val=val*10+S[i]-'0';
                    i++;
                 }
                 num.push(val);
                 i--;
             }
             else
             {
                 if(op.empty())
                 op.push(S[i]);
                 else
                 {
                     if(op.top()=='*')
                     {
                         int val1=num.top();
                         num.pop();
                         int val2=num.top();
                         num.pop();
                         op.pop();
                         num.push(val1*val2);
                     }
                     op.push(S[i]);
                     
                 }
             }
         }
         while(!op.empty()&&op.top()=='*')
         {
              int val2=num.top();
                         num.pop();
                         int val1=num.top();
                         num.pop();
                         char operand=op.top();
                         op.pop();
                         if(operand=='+')
                         num.push(val1+val2);
                         if(operand=='-')
                         num.push(val1-val2);
                         if(operand=='*')
                         num.push(val1*val2);
         }
         long long yo=0;
         while(!op.empty())
         {
              int val=num.top();
                         num.pop();
                         char operand=op.top();
                         op.pop();
                         if(operand=='+')
                         yo+=val;
                         if(operand=='-')
                         yo-=val;
         }
         yo+=num.top();
         if(yo==target)
         ans.push_back(S);
         return;
      }
      fun(ans,indx+1,S,target);
      
          for(auto &it:c)
          {
              string yo="";
              yo+=it;
              S.insert(indx+1,yo);
            fun(ans,indx+2,S,target);
            S.erase(S.begin()+indx+1);
          }
      
  }
    vector<string> addOperators(string S, int target) {
        vector<string>ans;
        fun(ans,0,S,target);
        return ans;
        
    }
};
