class Solution
{
    public:
    map<Node*,bool> dp;

 bool solve(Node* root, int val){

        if(!root) return true;

        return dp[root] = root->data == val and solve(root->left,val) and solve(root->right,val);}

  int singlevalued(Node *root){

        if(!root) return 0;

        return solve(root,root->data) + singlevalued(root->left) + singlevalued(root->right);}
    
};
