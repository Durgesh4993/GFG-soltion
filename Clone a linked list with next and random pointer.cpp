class Solution

{

 private:
    void insertattail(Node* &head,Node* &tail,int d)
    {
        Node* newnode=new Node(d);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
       Node* clonehead=NULL;
       Node* clonetail=NULL;
        
        Node* temp=head;
        //copy original data of node in clonenode
        while(temp!=NULL)
        {
            insertattail(clonehead,clonetail,temp->data);
            temp=temp->next;
        }
       //step 2 change links btw originl and clone ll
       Node* original=head;
       Node* clone=clonehead;
      
      // Node* clonenext=clone->next;
       while(original!=NULL && clone!=NULL)
       {
            Node* next1=original->next;
           original->next=clone;
           original=next1;
           
           next1=clone->next;
           clone->next=original;
           clone=next1;
           
       }
       //step 3 random orders btw original and clone
       original=head;
       
       while(original!=NULL)
       {
           if(original->next!=NULL)
           {
               original->next->arb=original->arb? original->arb->next : original->arb;
           }
           original=original->next->next;
       }
       //step 4 revert step 2
       original=head;
       clone=clonehead;
       while(original!=NULL && clone!=NULL)
       {
           original->next=clone->next;
           original=original->next;
           
          if(original!=NULL){
           clone->next=original->next;
          }
           clone=clone->next;
       }
       //step 5 return clonehead;
       return clonehead;
    }

};

