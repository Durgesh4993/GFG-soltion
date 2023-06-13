class Solution{
public:	
vector<int> kLargest(int arr[], int n, int k) {
	    vector<int> ans;
	    priority_queue<int> pq;
	    
	    for(int i=0;i<n;i++)
	    {
	        pq.push(arr[i]);
	    }
	    
	    for(int i=0;i<k;i++)
	    {
	        int top=pq.top();
	        pq.pop();
	        ans.push_back(top);
	    }
	    return ans;
	}


};
