class Solution {

public:

    void solveForLeft(Node *root,vector<int> &ans){

        if((root == NULL ) || (root->left == NULL && root->right == NULL))

            return ;

        ans.push_back(root->data);

        if(root->left)

            solveForLeft(root->left,ans);

        else

            solveForLeft(root->right,ans);

    }

    void solveForMiddle(Node *root,vector<int> &ans){

        if(root!=NULL){

            solveForMiddle(root->left,ans);

            if(root->left == NULL && root->right == NULL)

                ans.push_back(root->data);

            solveForMiddle(root->right,ans);

        }

    }

    void solveForRight(Node *root,vector<int> &ans){

        if((root == NULL ) || (root->left == NULL && root->right == NULL))

            return ;

        if(root->right)

            solveForRight(root->right,ans);

        else

            solveForRight(root->left,ans);

        ans.push_back(root->data);

    }

    vector <int> boundary(Node *root)

    {

        //Your code here

        vector<int> ans;

        if(root == NULL)

            return ans;

        ans.push_back(root->data);

        

        //for left side

        solveForLeft(root->left,ans);

        

        //for leaf nodes 

        solveForMiddle(root->left,ans);

        solveForMiddle(root->right,ans);

        

        //for right side

        solveForRight(root->right,ans);

        return ans;

    }

 

};
