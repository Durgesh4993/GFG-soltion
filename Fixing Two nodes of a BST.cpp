class Solution {
  public:
    void solve(struct Node* root, vector<int>&v, int &i){
      if(root==NULL) return ;
      solve(root->left, v, i);
      i++;
      if(root->data!=v[i]) root->data=v[i];
      solve(root->right, v, i);
  }
  
  void inorder(struct Node* root, vector<int>&v){
      if(root==NULL) return ;
      inorder(root->left, v);
      v.push_back(root->data);
      inorder(root->right, v);
  }
  
    void correctBST( struct Node* root )
    {
        vector<int>v;
        inorder(root, v);
        sort(v.begin(), v.end());
        int i=-1;
        solve(root, v, i);
    }


};
