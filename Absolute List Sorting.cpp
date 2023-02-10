class Solution{   
public:
    Node* sortList(Node* head)
    {
        //As the numbers are already sorted we observe if while traversing
        // a -ve number comes it will be lowest till now and should go in the
        // beginning of the list so we do just that by changing the links
        // to get a better feel how this can be done please draw on paper and
        // try to change the links to get in order
        // the idea i have used is to keep a previous pointer ,curr and we 
        //can use the same variable head
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
