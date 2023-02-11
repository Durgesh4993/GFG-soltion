class Solution
{
    public: 

    //Function to convert binary tree to doubly linked list and return it.

    Node*head , *temp;

    

    void fun(Node * root){

        if(!root) return ;

        fun(root->left);

         if(head==NULL){

            head=root;

            temp=root;

        }

        else {

            temp->right = root;

            root->left=temp;

            temp=temp->right;}

         fun(root->right);

    }

    Node * bToDLL(Node *root)

    {

        head=temp=NULL;

        fun(root);

        return head;

    }
};
