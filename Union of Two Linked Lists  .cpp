class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int> s;
        
        struct Node* ptr1 = head1;
        
        while(ptr1)
        {
            s.insert(ptr1->data);
            
            ptr1=ptr1->next;
        }
        
        struct Node* ptr2 = head2;
        
        while(ptr2)
        {
            s.insert(ptr2->data);
            
            ptr2 = ptr2->next;
        }
        
        auto i = s.begin();
        
        struct Node* head = new Node(*i);
        
        struct Node* ptr = head;
        i++;
        while(i!=s.end())
        {
            struct Node* n = new Node(*i);
            ptr->next = n;
            ptr = n;
            i++;
        }
        
        return head;
        
    }

};
