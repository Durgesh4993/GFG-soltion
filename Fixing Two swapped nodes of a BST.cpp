class Solution {
private: 
    Node *first, *mid, *last, *prev;
    
    void inorder(Node *root) {
        if(!root) return;
        
        inorder(root->left);
        if(prev and prev->data > root->data) {
            if(!first) {
                first = prev;
                mid = root;
            } else last = root;
        }
        
        prev = root;
        inorder(root->right);
    }
    
public:
    Node *correctBST(Node *root) {
        first = mid = last = NULL;
        prev = new Node(INT_MIN);
        
        inorder(root);
        
        if(first and last) 
            swap(first->data, last->data);
        else
            swap(first->data, mid->data);
        return root;
    }
};
