class Solution{
public:
	vector<int> findSubarray(int arr[], int n) {
	    // code here
	    pair<int,int>p;
	    p.first=0;
	    p.second=-1;
	    int i=0,j=0,maxi=0,sum=0;
	    while(j<n){
	        if(arr[j]>=0) sum+=arr[j++];
	        else{
	            if(maxi<sum){
	                maxi=max(sum,maxi);
	                p.first=i;
	                p.second=j-1;
	            }
	            sum=0;
	            i=j+1;
	            j+=1;
	        }
	    }
	    if(maxi<sum){
            maxi=max(sum,maxi);
            p.first=i;
            p.second=j-1;
	    }
	    vector<int>ans;
	    for(int k=p.first;k<=min(p.second,n-1);k++) ans.push_back(arr[k]);
	    if(ans.empty()) ans.push_back(-1);
	    return ans;
	}
};
