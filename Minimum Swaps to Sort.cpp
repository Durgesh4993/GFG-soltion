class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
int minSwaps(vector<int>&nums)
    {
        int n=nums.size();
       vector<pair<int,int>> v;
       
       for(int i=0;i<n;i++){
           v.push_back({nums[i],i});
       }
       int count=0;
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++)
       {
           if(v[i].second!=i)
           {
               count++;
               swap(v[i],v[v[i].second]);
               i--;
               
           }
       }
        return count;
    }
};
