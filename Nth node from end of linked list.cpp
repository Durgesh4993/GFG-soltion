class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
       int arr[1000000],i=0;
        while(head!=NULL)
        {
            arr[i++]=head->data;
            head=head->next;
        }
        return (i>=n)?arr[i-n]:-1;
    }
};
