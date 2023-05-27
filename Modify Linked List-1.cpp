class Solution{
    public:
    struct Node* getMiddle(struct Node* head,struct Node* slow,struct Node* fast,int n){
        
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(n % 2 != 0)
        return slow->next;
        else
        return slow;
    }
    
    struct Node* modifyTheList(struct Node *head)
    {
        struct Node* temp = head;
        int c = 0;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
       
        struct Node* slow = head;
        struct Node* fast = head;
        struct Node* ptr1 = head;
        struct Node* ptr2 = getMiddle(head,slow,fast,c);
        
        int hlength = c/2;
        vector<int>h1;
        vector<int>h2;
        
        while(ptr1 != NULL and hlength--){
            h1.push_back(ptr1->data);
            ptr1 = ptr1->next;
        }
        struct Node* temp2 = ptr2;
        while(temp2 != NULL and hlength--){
            h2.push_back(temp2->data);
            temp2 = temp2->next;
        }
        ptr1 = head;
        reverse(h2.begin(),h2.end());
        int i = 0;
        
        while(ptr1 != NULL and i < c/2){
            
            ptr1->data = h2[i] - ptr1->data;
            ptr1 = ptr1->next;
            i++;
        }
        i = 0;
        reverse(h1.begin(),h1.end());
        while(ptr2 != NULL and i < c/2){
            ptr2->data = h1[i];
            ptr2 = ptr2->next;
            i++;
        }
        
        return head;
    }
};

