class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
    
        if(seats[0] == 0 && m == 1 && n == 1) return true;
        if( n == 0) return true;
         for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==0)
            {
                if((i==0 || seats[i-1]==0)&&(i==seats.size()-1 || seats[i+1]==0))
                {
                    n--;
                    seats[i]=1;
                }
            }
            if(n == 0){
                return true;
            }
        }
        return false;
    }
};
