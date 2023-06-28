class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
  }

};
