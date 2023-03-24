class Solution {
  public:
    string removeReverse(string S) {
        // code here
       int n=S.size();
       unordered_map<char,int>freq;
       
       for(int i=0;i<n;i++)
       {
         freq[S[i]]++;
       }
       
       int low=0;
       int high=n-1;
       
       int path=0;
       
       while(low<=high)//binary search
       {
           if(path==0)
           {
               if(freq[S[low]]==1)//repeating character nahi hai;
               {
                  low++;
               }
               else
               {
                   freq[S[low]]--;
                   S[low]='*';
                   low++;
                   path=1;
                   
               }
           }
           else
           {
               if(freq[S[high]]==1)
               {
                   high--;
               }
               else
               {
                   freq[S[high]]--;
                   S[high]='*';
                   high--;
                   path=0;
               }
           }
           
       }
       string res;
       for(int i=0;i<n;i++)
       {
           if(S[i]!='*')
           {
               res.push_back(S[i]);
           }
       }
       if(path==1)
       {
           reverse(res.begin(),res.end());
       }
       return res;
       
    }
};
