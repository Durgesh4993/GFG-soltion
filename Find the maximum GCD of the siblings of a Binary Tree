class Solution
{
public:
   int maxGCD( Node* root)
    {
        //code here
        if(root==NULL){
            return 0;
        }
        int mxans = 0;
        queue<Node*>q;
        int ansnode = 0;
        q.push(root);
        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            if(node->left && node->right && mxans<=__gcd(node->left->data,node->right->data)){
                mxans = __gcd(node->left->data,node->right->data);
                ansnode = node->data;
            }
            
        }
        return ansnode;
    }
};
