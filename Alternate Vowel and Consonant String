class Solution{
    public:
    int find_vow(int arr[], int k){
        for(int i=k; i<5; i++){
            if(arr[i]>0){
                arr[i] -= 1;
                return i;
            }
        }
    }
    int find_con(int arr[], int j){
        for(int i=j; i<26; i++){
            if(arr[i]>0){
                arr[i] -=1;
                return i;
            }
        }
    }
    string rearrange (string S, int N)
    {
        // your code here
        int v=0, c=0, k=0, j=0;
        for(int i=0; i<N; i++){
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
                v++;
            else
                c++;
        }
        if(abs(v-c)>1){
            return "-1";
        }
        
        int con[26];
        int vow[5];
        for(int i=0; i<26; i++){
            con[i] = 0;
            if(i<5){
                vow[i] = 0;
            }
        }
        for(int i=0; i<N; i++){
            if(S[i]=='a')
                vow[0] += 1;
            else if(S[i]=='e')
                vow[1] += 1;
            else if(S[i]=='i')
                vow[2] += 1;
            else if(S[i]=='o')
                vow[3] += 1;
            else if(S[i]=='u'){
                vow[4] += 1;
            }
            else{
                con[S[i]-97] += 1;
            }
        }
        if(v>=c){
            for(int i=0; i<N; i++){
                if(i%2 == 0){
                    k = find_vow(vow, k);
                    if(k==0)
                        S[i] = 'a';
                    else if(k==1)
                        S[i] = 'e';
                    else if(k==2)
                        S[i] = 'i';
                    else if(k==3)
                        S[i] = 'o';
                    else
                        S[i] = 'u';
                }
                else{
                    j = find_con(con, j);
                    S[i] = j+97;
                }
            }
        }
        else{
            for(int i=0; i<N; i++){
                if(i%2 == 0){
                    j = find_con(con, j);
                    
                    S[i] = j+97;
                }
                else{
                    k = find_vow(vow, k);
                    if(k==0)
                        S[i] = 'a';
                    else if(k==1)
                        S[i] = 'e';
                    else if(k==2)
                        S[i] = 'i';
                    else if(k==3)
                        S[i] = 'o';
                    else
                        S[i] = 'u';
                }
            }
        }
        return S;    
    }
};
