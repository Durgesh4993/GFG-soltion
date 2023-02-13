class Solution{

    public:

    /*You are required to complete this method */

    // Return the size of the largest sub-tree which is also a BST

    class info{

        public:

        int nodes;

        int maxi;

        int mini;

        bool isbst;

        int maxi_nodes;

    };

    info help(Node*root){

        if(root==NULL){

            info base_info;

            base_info.nodes = 0;

            base_info.maxi=INT_MIN;

            base_info.mini=INT_MAX;

            base_info.isbst = 1;

            base_info.maxi_nodes=0;

            return base_info;

        }

        

        info left = help(root ->left);

        info right = help(root->right);

        info ans;

        ans.nodes = left.nodes + right.nodes + 1;

        ans.maxi = max(max(left.maxi,right.maxi),root->data);

        ans.mini = min(min(left.mini,right.mini),root->data);

        

        ans.isbst = (root->data < right.mini) && (root->data>left.maxi) && (left.isbst)&&(right.isbst); 

        

        

        if(ans.isbst){

            ans.maxi_nodes = ans.nodes;

        }

        else{

            ans.maxi_nodes = max(left.maxi_nodes,right.maxi_nodes);

        }

        

        

        return ans;

    }

    

    

    

    

    int largestBst(Node *root)

    {

     info tree = help(root);

     return tree.maxi_nodes;

     

     

    }

};
