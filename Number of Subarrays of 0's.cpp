long long int no_of_subarrays(int n, vector<int> &a) {
    long long int ans=0, cnt=0;
    for(auto x: a) {
        if(x==0) cnt++;
        else {
            ans += ((cnt)*(cnt+1))/2;
            cnt=0;
        }
    }
    ans += ((cnt)*(cnt+1))/2;
    return ans;
}
