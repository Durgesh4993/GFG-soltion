class Solution
{
    public:
Node *reverseLL(Node* node){
    if(node->next == nullptr)return node;
    Node* newHead = reverseLL(node->next);
    node->next->next = node;
    node->next = NULL;
    return newHead;
}
Node *compute(Node *head)
{
    // your code goes here
    Node* reverseL = reverseLL(head);
    Node* curr = reverseL, *prev = curr;
    curr = curr->next;
    int maxi = prev->data;
    // delete node which are having small values than prev. (Since we are traversing reverse LL)
    while(curr){
        if(curr->data < maxi){
            prev->next = curr->next;
        }else{
            prev = curr;
        }
        maxi = max(maxi, curr->data);
        curr = curr->next;
    }
    return reverseLL(reverseL);
}

    
};
