class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
   int minDiff(Node *root, int K)
{
        int mincount=INT_MAX;
        while(root!=NULL){
            int absvalue = abs(K-(root->data));
            mincount = min(mincount,absvalue);
            if(K>root->data)
                root = root->right;
            else
                root = root->left;
        }
        return mincount;
}
};
