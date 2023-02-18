class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
   vector <int> calculateSpan(int price[], int n)
    {
     vector<int> v;
     stack<int> s;
     unordered_map<int,int> m;
     m[price[0]]=0;
     v.push_back(1);
     s.push(price[0]);
     for(int i=1;i<n;i++){
         while(s.size()){
             if(price[i]>=s.top())
                 s.pop();
             else
                break;
         }
         if(s.size())
            v.push_back(i-m[s.top()]);
         else
            v.push_back(i+1);
         s.push(price[i]);
         m[price[i]]=i;
     }
    return v;
    }
};
