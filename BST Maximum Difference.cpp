class Solution{
public:
    Node* find(Node* root,int target){

        if(root==NULL)return NULL;

        if(root->data==target)return root;

        if(root->data>target)

        find(root->left,target);

        else 

        find(root->right,target);

        

    }

  

    void root_TO_target(Node* root,int target,int &ans){

        if(root->data==target)return;

        ans=ans+root->data;

        if(root->data>target)

        root_TO_target(root->left,target,ans);

        else 

        root_TO_target(root->right,target,ans);

    }

    

    void target_to_child(Node* root){

        if(root==NULL)return;

        if(root->left){

            root->left->data+=root->data;

            target_to_child(root->left);

        }

        if(root->right){

            root->right->data+=root->data;

            target_to_child(root->right);

        }

    }

  

    void max_mini(Node* root,int &a,int &b){

        if(root==NULL)return;

        if(!root->left and !root->right){

            a=min(a,root->data);

            b=max(b,root->data);

        }

        else if(!root->left){

            max_mini(root->right,a,b);

        }else if(!root->right){

            max_mini(root->left,a,b);

        }else{

            max_mini(root->left,a,b);

            max_mini(root->right,a,b);

        }

    }

    int maxDifferenceBST(Node *root,int target){

 

        Node* temp = find(root,target);

        if(!temp)return -1;

        int ans = 0;

        root_TO_target(root,target,ans);

        int a = INT_MAX,b=INT_MIN;

        

        target_to_child(temp->left);

        target_to_child(temp->right);

        

        max_mini(temp->left,a,b);

        max_mini(temp->right,a,b);

        if(a==INT_MAX)a=0;

        if(b==INT_MIN)b=0;

        return max(ans-a,ans-b);

    }

};
