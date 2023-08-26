class Solution {
private:
    int findMinTime(Node* root, int target, unordered_map<int, vector<int>> &ans, int level, bool flag){
        
        if(root == NULL) return -1;
        
        if(flag) ans[level].push_back(root->data);
        
        if(root->data == target){
            //ans[0].push_back(root->data);
            findMinTime(root->left,target,ans,1,true);
            findMinTime(root->right, target, ans,1,true);
            return 1;
        }
        
        int left = findMinTime(root->left,target,ans,level+1,flag);
        int right = findMinTime(root->right, target, ans, level+1, flag);
        
        if(left != -1){
            ans[left].push_back(root->data);
            findMinTime(root->right,target,ans,left+1,true);
            return left+1;
        }
        
        if(right != -1){
            ans[right].push_back(root->data);
            findMinTime(root->left,target,ans,right+1,true);
            return right+1;
        }
        
        return -1;
    }

public:
    int minTime(Node* root, int target) {
        // Your code goes here
        unordered_map<int , vector<int>> ans;
        findMinTime(root,target,ans,0,false);
        return ans.size();
    }
};
