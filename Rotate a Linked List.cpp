class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
        Node*temp=head;
        Node*prev;
        Node*temp2=head;
        while(k!=0)
        {
            prev=temp;
            if(temp->next==NULL)return head;
            temp=temp->next;
            temp2=temp;
            k--;
        }
        prev->next=NULL;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
    return temp2;
    }
};
