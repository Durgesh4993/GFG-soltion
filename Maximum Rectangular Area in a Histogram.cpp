class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<long long> leftSmaller(long long arr[], int n){
        // code here
        
        stack<long long> st;
        vector<long long> vec;
        
        for(int i = 0;i<n;i++)
        {
            if(st.size()==0)
            {
                vec.push_back(-1);
            }
            
            else if(arr[st.top()]<arr[i])
            {
                vec.push_back(st.top());
            }
            
            else if(arr[st.top()]>=arr[i])
            {
                while(st.size()>0 && arr[st.top()]>=arr[i])
                {
                    st.pop();
                }
                
                if(st.size()==0)
                {
                    vec.push_back(-1);
                }
                else
                {
                    vec.push_back(st.top());
                }
            }
            
            st.push(i);
        }
        return vec;
    }
    
    vector<long long> rightSmaller(long long arr[], int n) 
    { 
        stack<long long> st;
        vector<long long> vec;
        
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                vec.push_back(n);
            }
            else if(st.size()>0 && arr[st.top()]<arr[i])
            {
                vec.push_back(st.top());
            }
            else if(st.size()>0 && arr[st.top()]>=arr[i])
            {
                while(st.size()>0 && arr[st.top()]>=arr[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    vec.push_back(n);
                }
                else if(arr[st.top()]<arr[i])
                {
                    vec.push_back(st.top());
                }
            }
            st.push(i);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    } 
    
    
    long long getMaxArea(long long arr[], int n)
    {
        long long area = 0;
        
        vector<long long> l = leftSmaller(arr, n);
        vector<long long> r = rightSmaller(arr, n);
        
    
        
        for(int i=0;i<n;i++)
        {
            area = max(area, ((r[i]-l[i]-1)* arr[i] ) );
        }
        
        return area;
        
    }


};
