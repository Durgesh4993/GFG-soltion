class Solution{
public:

    bool Is_palindrome(string temp){
        
        int i = 0 , j = temp.size()-1;
        while(i<=j){
            
            if(temp[i] != temp[j]) return false;
            i++;
            j--;
        }
        
        return true ;
    }
    
    
    int solve(int index , string str , vector<int>& dp){
        
            if(index >= str.size()) return -1 ;
            
            if(dp[index] != -1) return dp[index];
            
            int ans = INT_MAX ;
            for(int k=index ; k<str.size() ; k++){
                
                        string temp = str.substr(index,k-index+1) ;
                    
                        if(Is_palindrome(temp)){
                            
                                int temp = 1 + solve(k+1 , str , dp) ; 
                                
                                ans = min(ans , temp) ;
                        }
                        
            }
            
            return dp[index] =  ans ;
    }
    

    int palindromicPartition(string str)
    {
        // code here
        if(Is_palindrome(str)) return 0 ;
        
        vector<int> dp(str.size()+1 , -1) ;
        
        return solve(0 , str , dp) ;
    }
};
