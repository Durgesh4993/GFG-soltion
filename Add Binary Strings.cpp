class Solution{
public:	
	string addBinary(string A, string B) {

	    int carry = 0, ind = 0;
	    string ans;
	    reverse(A.begin(), A.end());
	    reverse(B.begin(), B.end());
	    while(ind < A.length() || ind < B.length()) {
		    
	        if(ind < A.length()) carry += (A[ind] - '0');
		    
	        if(ind < B.length()) carry += (B[ind] - '0');
	        
	        ans += to_string(carry%2);
		    
	        carry = (carry >= 2) ? 1 : 0;
		    
	        ind++;
		    
	    }
		
	    if(carry) ans += to_string(carry%2);
		
	    while(ans.length() > 0 && ans.back() == '0') ans.pop_back();
		
	    reverse(ans.begin(), ans.end());
		
	    return ans;
	}
	
};
