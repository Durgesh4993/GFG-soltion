class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    void inorder( Node* root,vector<int>&v)
    {
    stack<Node*> s;
    Node* curr = root;
 
    while (curr != NULL || s.empty() == false) {
        
        while (curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }
 
        curr = s.top();
        s.pop();
 
        v.push_back(curr->data);
        curr = curr->right;
     }
   }
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int>v1,v2;
       inorder(root1,v1);
       inorder(root2,v2);
       
       vector<int>v;
       int n1=v1.size();
       int n2=v2.size();
       int i=0; int j=0;
       while(i<n1 && j<n2)
       {
           if(v1[i]<v2[j])
           {
               v.push_back(v1[i]);
               i++;
           }
           else
           {
               v.push_back(v2[j]);
               j++;
           }
       }
       while(i<n1){
           v.push_back(v1[i]);
           i++;
       }
       while(j<n2)
       {
           v.push_back(v2[j]);
           j++;
       }
       return v;
    }
};
