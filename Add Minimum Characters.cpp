class Solution{   
public:
 int addMinChar(string str){    
        string s;
        int N=str.length();
        int low=0,high=N-1,count=0;
        
        while(low<high){
            if(str[high]==str[low])
            {
                count++;
                low++;
                high--;
            }
           else
            {
                low=0;
                count=0;
                if(str[0]!=str[high])
                {
                    high--;
                }
            }
        }
        
       // cout<<count<<" ";
        if(low==high)
            count=count*2+1;
        else
         count=count*2;
        
        return   N-count;
    }
};
