class Solution{
    public:
    void connect(Node *root)
    {
       // Code Here
       queue<Node*>q;
       q.push(root);
       while(!q.empty()){
           int n=q.size();
           for(int i=1;i<=n;i++){
               Node*temp=q.front();
               q.pop();
               if(i==n){
                   temp->nextRight=NULL;
               }
               if(i!=n){
                   temp->nextRight=q.front();
               }
               if(temp->left){
                  
                   q.push(temp->left);
               }
               if(temp->right){
                   
                   q.push(temp->right);
               }
              
           }
               
       }
    }    
};
