class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
       int maxleft=0,maxright=0;
       vector<int> ans;
        set<pair<int,int>> s;
        if(root==NULL) return ans;
        queue<pair<int,Node*>> q;
        q.push({0,root});
        s.insert({0,root->data});
        while(!q.empty()){
        int i=q.size();
        while(i--){
            auto p=q.front();
            q.pop();
            auto x=p.first;
            auto y=p.second;
            if(x<maxleft) {s.insert({x,y->data}); maxleft=x;}
            if(x>maxright){s.insert({x,y->data});maxright=x;}
            if(y->left) q.push({x-1,y->left});
            if(y->right) q.push({x+1,y->right});
        }
        }
        for(auto i:s) ans.push_back(i.second);
     return ans;
    }

};
