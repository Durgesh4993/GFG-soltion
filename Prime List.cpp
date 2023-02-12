class Solution{

public:

    bool isprime(int n){

       if(n==0 || n==1) return false;

       for(int i=2; i*i<=n; i++){

           if(n%i==0) return false;

       }

       return true;

    }

    int prime(int n){

        if(isprime(n)) return n;

        int i=1;

        while(true){

            if(isprime(n-i)) return n-i;

            if(isprime(n+i)) return n+i;

            i++;

        }

    }

    Node *primeList(Node *head){

        Node *temp = head;

        while(temp!=NULL){

            temp->val = prime(temp->val);

            temp = temp->next;

        }

        return head;

    }

};
