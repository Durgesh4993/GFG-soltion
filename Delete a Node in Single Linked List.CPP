Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x == 1){
        return head->next;
    }
    int c = x;
    Node* temp = head;
    while(c>2 && temp){
        c--;
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

