class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node * slow = head, * fast = head;
        
        if (!head || !head->next)
            return;
            
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow==fast)
            {
                
                if (slow==head)
                {
                    while(fast->next!=slow)
                    {
                        fast = fast->next;
                    }
                    fast->next=NULL;
                    return;
                }
                
                slow = head;
                
                while (slow->next!=fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                
                fast->next = NULL;
                return;
            }
        }
        

        // code here
        // just remove the loop without losing any nodes
    }
};
