class Solution {
  public:
    string longestPalin (string S) {
        
        // code here
         int low,high;
         pair<int,int> index(0,0);
      
        for(int i=0;i<S.size();++i){
            
            // odd length
               low=i-1;
               high=i+1;
               
               while(low>=0 && high<=S.size()-1 && S[low]==S[high]){
                   low--;
                   high++;
               }
               
               low++;
               high--;
               
               if( (index.second - index.first) < (high-low)  ){
                   index.first=low;
                   index.second=high;
               }
                
            // check even length
            
            low=i; 
            high=i+1;
            
                while(low>=0 && high<=S.size()-1 && S[low]==S[high]){
                   low--;
                   high++;
                }
               
               low++;
               high--;
               
               if( (index.second - index.first) < (high-low)  ){
                   index.first=low;
                   index.second=high;
               }
            
        }
        
        if( (index.second - index.first) == 0 ) return S.substr(0,1);
        return S.substr(index.first,(index.second - index.first + 1));
        
    }
};
