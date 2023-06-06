class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        pre=NULL;
        suc=NULL;
        while(root!=NULL)
        {
            if(root->key ==key)
            {
                if(root->left==NULL && root->right==NULL)return ;
                
                if(root->right!=NULL)
                {
               suc=root->right;
                  while(suc!=NULL && suc->left!=NULL)
                {
                    suc=suc->left;
                }
                }
                if(root->left!=NULL)
                {
               pre=root->left;
                while(pre!=NULL && pre->right!=NULL)
                {
                    pre=pre->right;
                }
                }
                return ;
            }else if(root->key>key)
            {
                suc=root;
                root=root->left;
            }else{
                pre=root;
                root=root->right;
            }
        }
        return ;
    }
};

