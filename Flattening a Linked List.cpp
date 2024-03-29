
class Solution {
public:
    Node* merge(Node* n1,Node* n2)

    {

        Node* tmp=new Node(0);
        Node* res=tmp;

        

        while(n1 != NULL && n2 != NULL)

        {

            if(n1->data <= n2->data)

            {

                tmp->bottom=n1;

                tmp=tmp->bottom;

                n1=n1->bottom;

            }

            else

            {

                tmp->bottom=n2;

                tmp=tmp->bottom;

                n2=n2->bottom;

            }

        }

        

        if(n1)

        {

            tmp->bottom=n1;

        }

        else

        {

            tmp->bottom=n2;

        }

        

        return res->bottom;

    }

    Node *flatten(Node *root)

    {

        if(root==NULL || root->next==NULL)

        {

            return root;

        }

        

        root->next=flatten(root->next);

        

        root=merge(root,root->next);

        

        return root;

    }
};
