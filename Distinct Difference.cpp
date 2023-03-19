class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        unordered_map<int,int> left, right;
        vector<int> ans;
        for(int i=0; i<N; i++){
            right[A[i]]++;
        }
        for(int i=0; i<N; i++){
            right[A[i]]--;
            if(right[A[i]]==0){
                right.erase(A[i]);
            }
            ans.push_back(left.size()-right.size());
            left[A[i]]++;
        }
        return ans;
    }
};
