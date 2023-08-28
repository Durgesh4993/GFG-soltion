class Solution{
public:	

    void inversion(vector<pair<int,int>>& temp,vector<int>& count,int s,int mid,int e)
    {
        vector<pair<int,int>> ans;
        int i=s;
        int j=mid+1;
        
        while(i<=mid and j<=e)
        {
            if(temp[i].first<=temp[j].first)
            {
                ans.push_back(temp[j]);
                j++;
            }
            else
            {
               count[temp[i].second]+=(e-j+1);
               ans.push_back(temp[i]);
               i++; 
            }
        }
        
        while(i<=mid)
        {
            ans.push_back(temp[i]);
            i++;
        }
        
        while(j<=e)
        {
            ans.push_back(temp[j]);
            j++;
        }
        
        int k=s;
        for(auto it:ans)
        {
            temp[k]=it;
            k++;
        }
        
        return ;
    }
    void merge(vector<pair<int,int>>& temp,vector<int>& count,int s,int e)
    {
        if(s>=e)
        return ;
        
        int mid=(s+e)/2;
        merge(temp,count,s,mid);
        merge(temp,count,mid+1,e);
        inversion(temp,count,s,mid,e);
    }
	vector<int> constructLowerArray(int *arr, int n) {
	    
	    
	    vector<pair<int,int>> temp;
	    for(int i=0;i<n;i++)
	    temp.push_back({arr[i],i});
	    
	    vector<int> count(n);
	    merge(temp,count,0,n-1);
	    
	    return count;
	}
};
