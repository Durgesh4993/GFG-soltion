class Solution{
  public:
     Node* constructBinaryTree(int pre[], int preMirror[], int size, int l=0, int a=0)
    {
        Node*n = new Node(pre[l++]);
        if(size == 1)
            return n;
        a++;
        n->left = constructBinaryTree(pre, preMirror, size/2,l,a+size/2 );
        n->right = constructBinaryTree(pre, preMirror, size/2,l+size/2,a);
        return n;
    }
};
