class Solution{
    public:
    int solve(int a, int b, int c, int d){
        
        if((a <= c && b <= d) || (a <= d && b <= c))
            return 0;
        
        if(a > c){
            // cout<<"A: "<<a<<" A/2: "<<(a>>1)<<endl;
            a = a >> 1;
            
        }
        else if(b > d){
            // cout<<"B: "<<b<<" B/2: "<<(b>>1)<<endl;
            b = b >> 1;
        }
        
        return 1 + solve(max(a,b), min(a, b), c, d);
    }
    
    int carpetBox(int A, int B, int C, int D){
        
        return solve(max(A,B), min(A,B), max(C,D), min(C,D));
    }
};
