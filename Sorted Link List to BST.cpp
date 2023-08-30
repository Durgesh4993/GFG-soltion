class Solution{
  public:
    TNode* sortedListToBST(LNode *head) {
        LNode* tail=NULL;
        return buildTree(head,tail);
    }
    TNode* buildTree(LNode* head,LNode* tail){
        if(head==tail) return NULL;
        LNode* fast=head,*slow= head;
        while(fast!=tail && fast->next!=tail){
            fast=fast->next->next;
            slow=slow->next;
        }
        //because slow is working as mid 
        TNode* root=new TNode(slow->data);
        root->left=buildTree(head,slow);
        root->right=buildTree(slow->next,tail);
        return root;
    }
};
