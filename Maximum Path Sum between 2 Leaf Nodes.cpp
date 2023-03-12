class Solution {
public:
    int maxPathSumHelper(Node* root,int &pathLen)

    {

        if (!root)

        {

            return INT_MIN;

        }

        if (root->left == NULL && root->right == NULL)

        {

            return root->data;

        }

        int l = maxPathSumHelper(root->left,pathLen);

        int r = maxPathSumHelper(root->right,pathLen);

        

        if (root->left != NULL && root->right != NULL)

        {

            pathLen = max(pathLen,l+r+root->data);

        }

        return max(l,r)+root->data;

    }

    int maxPathSum(Node* root)

    {

        // code here

        int pathLen = INT_MIN;

        int temp = maxPathSumHelper(root,pathLen);

        

        if (root->left == NULL || root->right== NULL)

        {

            return max(temp,pathLen);

        }

        return pathLen;

    }
};
