class Solution {
  private:
    map<int, int> mp;
    void dfs(Node* root, int level){
        if(root==NULL){
            return ;
        }
        
        int data=root->data;
        if(mp.find(level)==mp.end()){
            mp[level]=data;
        }
        else{
            mp[level]=max(mp[level], data);
        }
        
        dfs(root->left, level+1);
        dfs(root->right, level+1);
    }
    vector<int> solve1(Node* node){
        vector<int> ans;
        dfs(node, 0);
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
    
    vector<int> solve2(Node* node){
        vector<int> ans;
        
        queue<Node*> que;
        que.push(node);
        que.push(NULL);
        int maxi=INT_MIN;
        int level=0;
        while(!que.empty()){
            Node* top=que.front();
            que.pop();
            
            if(top==NULL){
                ans.push_back(maxi);
                if(!que.empty()){
                    que.push(NULL);
                    maxi=INT_MIN;
                }
                continue;
            }
            
            if(top->left){
                que.push(top->left);
            }
            if(top->right){
                que.push(top->right);
            }
            
            maxi=max(maxi, top->data);
        }
        
        return ans;
    }
  public:
    vector<int> maximumValue(Node* node) {
        return solve1(node);
        return solve2(node);
    }
};
