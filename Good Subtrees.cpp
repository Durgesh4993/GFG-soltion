class Solution{
public:
    int ans = 0;
    vector<int> rec(Node *root, int k) {
        if(!root) return vector<int>(30);
        vector<int> lft = rec(root->left, k);
        vector<int> rght = rec(root->right, k);
        vector<int> now(30);
        ++now[root->data];
        for(int i=1; i<30; i++) {
            now[i] += lft[i];
            now[i] += rght[i];
        }
        int cnt = 0;
        for(int i=1; i<30; i++) {
            if(now[i]) ++cnt;
        }
        ans += (cnt<=k);
        return now;
    }
    int goodSubtrees(Node *root,int k){
        ans = 0;
        rec(root, k);
        return ans;
    }
};
