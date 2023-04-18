class Solution {
    int  n = 1e9;
public:
    int mnn(Node *root){
        while(root->left) root = root->left;
        return root->data;
    }
    int mxx(Node *root){
        while(root->right) root = root->right;
        return root->data;
    }
    vector<int> traverse(Node *root, int target){
        if(root == NULL) return {0,0,1};
        
        auto p = traverse(root->left, target);
        auto q = traverse(root->right, target);
        vector<int> r(3,0);
        
        if(p[2] and q[2]){
            if(p[0]==0 and q[0]==0){
                r[0] = 1;
                r[1] = root->data;
                r[2] = 1;
            }
            else if(p[0]!=0 and q[0]==0){
                r[0] = p[0]+1;
                r[1] = p[1]+root->data;
                if(mxx(root->left) < root->data) r[2] = 1;
            }
            else if(p[0]==0 and q[0]!=0){
                r[0] = q[0]+1;
                r[1] = q[1]+root->data;
                if(mnn(root->right) > root->data) r[2] = 1;
            }
            else if(p[0]!=0 and q[0]!=0){
                r[0] = p[0]+q[0]+1;
                r[1] = p[1]+q[1]+root->data;
                if(mxx(root->left) < root->data and mnn(root->right) > root->data) r[2] = 1;
            }
            if(r[0]<n and r[1]==target and r[2]) n=r[0];
        }
        
        return r;
    }
    int minSubtreeSumBST(int target, Node *root) {
        traverse(root, target);
        
        if(n == 1e9) return -1;
        return n;
    }
};

