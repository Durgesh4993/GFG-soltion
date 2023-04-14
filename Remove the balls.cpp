class Solution {
  public:
  int finLength(int N, vector<int> color, vector<int> radius) {
        stack<int> st1;
        stack<int> st2;
 
    for(int i=0; i<N; i++)
    {
            
    if(!st1.empty() and !st2.empty())
    {
            if((color[i] == st1.top() ) and (radius[i] == st2.top()))
            {
                st1.pop();
                st2.pop();
                //  Count++ ;
                
            } 
            else
            {
                st1.push(color[i]);
                st2.push(radius[i]);
            }
    }
            else
            {
                st1.push(color[i] ) ;
                st2.push(radius[i] ) ;
            }
        }
        
             return st1.size();
           
    }
};
