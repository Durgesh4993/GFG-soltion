
class Solution{   
public:

    Node* sortList(Node* head)

    {
        
        Node *curr = head->next,*prev = head;  
        
        while(curr)
        
        {
            
            if(curr->data < 0)
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
