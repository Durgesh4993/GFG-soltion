class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	//sort both the arrays
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int a_p=0,d_p=0;//arrival and departure pointers
    	int count=0,max_count=0;
    	while(a_p<n && d_p<n)
    	{
    	    if(a_p <n && arr[a_p]<=dep[d_p])
    	    {
    	        count++;
    	        max_count=max(max_count,count);
    	        a_p++;
    	    }
    	    else
    	    {
    	        count--;
    	        d_p++;
    	    }
    	    
    	}
    	return max_count;
    }
};
