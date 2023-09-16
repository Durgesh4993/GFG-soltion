
class Solution{   

public:

    Node* sortList(Node* head)

    {
        Node *curr = head->next,*prev = head;  
        while(curr)
        
        {
            if(curr->data < 0) // if we get a negative number put this number in front 
            {
                prev->next = curr->next; 
                curr->next = head;
                head = curr;
                curr = prev->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
