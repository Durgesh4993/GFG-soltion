void printCorner(Node *root)
{
  if(!root) return;
  queue <Node *> q;
  q.push(root);
  while(!q.empty()){
      int size=q.size();
      for(int i=0;i<size;i++){
          Node *temp=q.front();
          if(i==0 || i==size-1) cout<<temp->data<<" ";
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
          q.pop();
      }
  }
}

