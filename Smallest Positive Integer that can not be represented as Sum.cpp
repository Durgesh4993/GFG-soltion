class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        // code here
        sort(array.begin(),array.end());
        long long ans=1;
        for(int i=0;i<n;i++){
            if(array[i]>ans){
                return ans;
            }
            ans+=array[i];
        }
        return ans;
    }

};
