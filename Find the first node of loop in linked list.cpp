class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
   int findFirstNode(Node* head)
    {
        Node* hare = head, *tort = head;
        bool loop = false;
        while(hare != NULL && hare->next != NULL){
        
            hare = hare->next->next;
            tort = tort->next;
            if(hare == tort){
                loop = true;
                break;
            }
        }
        if(!loop){
            return -1;
        }
        hare = head;
        while(hare != tort){
            hare = hare->next;
            tort = tort->next;
        }
        return hare->data;
    }
};
