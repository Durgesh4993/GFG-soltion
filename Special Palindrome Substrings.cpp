class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string s1, string s2){
        //Code Here
        int ans=2000;
        int n=s1.size(),m=s2.size();
        for(int i=0;i<n-m+1;i++){
            vector<bool>changed(n,0);
            int cnt=0;
            string t=s1;
            for(int j=0;j<m;j++){
                if(t[i+j]!=s2[j]){
                    if(changed[i+j]==0){
                        cnt++;
                        t[i+j]=s2[j];
                    }
                    else{
                        cnt=2000;
                        break;
                    }
                }
                if(t[n-(i+j)-1]!=s2[j]){
                     if(changed[n-(i+j)-1]==0){
                        cnt++;
                        t[n-(i+j)-1]=s2[j];
                    }
                    else{
                        cnt=2000;
                        break;
                    }
                }
                changed[i+j]=changed[n-(i+j)-1]=1;
            }
            for(int j=0;j<n;j++){
                if(changed[j]==0 and t[j]!=t[n-j-1]){
                    cnt++;
                    t[j]=t[n-j-1];
                    changed[j]=1;
                    changed[n-j-1]=1;
                }
            }
            ans=min(ans,cnt);
        }
        return ((ans==2000)?-1:ans);
    }
};
