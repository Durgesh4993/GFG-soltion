class Solution {
  public:
    // Function to find largest subtree sum.
    int findMax(Node* root, int &ans){
        if(root==NULL){
            return 0;
        }
        int subTreeSum=root->data+findMax(root->left,ans)+findMax(root->right,ans);
        ans=max(ans,subTreeSum);
        return subTreeSum;
    }
    int findLargestSubtreeSum(Node* root)
    {
        int ans=0;
        findMax(root,ans);
        return ans;
    }
};
