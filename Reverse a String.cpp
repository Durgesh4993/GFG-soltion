class Solution
{
    public:
 string reverseWord(string str)
    {
        // Your code goes here
        int n=str.length();
        int s =0;
        int l= n-1;
        
        while(s<=l){
            swap(str[s],str[l]);
            l--;
            s++;
        }
        return str;
    }


};
