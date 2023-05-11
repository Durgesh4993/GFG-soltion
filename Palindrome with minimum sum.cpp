class Solution {
  public:
   int minimumSum(string s) {
        int n = s.size();
        string arr = s;
        int i = 0;
        int j = n-1;
        while(i<j){
            if(arr[i] != arr[j]){
                if(arr[i] != '?' && arr[j]!= '?'){
                    return -1;
                }
                else if(arr[i]=='?' && arr[j]!= '?'){
                    arr[i] = arr[j];
                }
                else if(arr[i]!= '?' && arr[j]=='?'){
                    arr[j] = arr[i];
                }
                else{
                    // do nothing
                }
            }
            i++;
            j--;
        }
        int ans =0;
        for(int i=0;i<n-1;i++){
            if(arr[i]!='?' && arr[i+1]!='?'){
                ans+= abs(arr[i]-arr[i+1]);
            }
            else{
                if(arr[i]!='?' && arr[i+1]=='?'){
                    int j = i+1;
                    while(j<n && arr[j]=='?'){
                        arr[j] = arr[i];
                        arr[n-1-j] = arr[i];
                        j++;
                    }
                }
                else if(arr[i] == '?' && arr[i+1]!= '?'){
                    arr[i] = arr[i+1];
                    arr[n-1-i] = arr[i+1];
                }
                else{
                    int j = i;
                    while(j<n && arr[j]=='?'){
                        j++;
                    }
                    if(j!= n){
                        for(int k = i;k<j;k++){
                            arr[k] = arr[j];
                            arr[n-1-k] = arr[j];
                        }
                    }
                    else{
                        return ans;
                    }
                }
            }
        }
        return ans;
    }
};
