long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long ans = 0;
    int l = 0, r = len - 1;
    while(l<r){
        long long temp = min(A[l],A[r])*(r-l);
        ans = max(ans, temp);
        if(A[l]<A[r]){
            ++l;
        }
        else{
            --r;
        }
    }
    return ans;
}
