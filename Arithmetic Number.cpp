class Solution{
public:
     int inSequence(int a, int b, int c){
        // code here
        if(c==0)
        {
            if(a==b)
            return 1;
            return 0;
        }
        else if(c>0)
        {
            if(a>b)
            return 0;
            else if((b-a)%c==0)
            return 1;
            return 0;
        }
        else{
            if(a<b)
            return 0;
            else if((b-a)%c==0)
            return 1;
            return 0;
            
        }

     }
     };
