class Solution
{
private:

public:
    Node* findParents(Node*root , unordered_map<Node* , Node*> &parent , int target)
    {
        if(root == NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        Node*ans = NULL;
        while(!q.empty())
        {
            Node*front = q.front();
            q.pop();
            if(front->data == target) ans = front;
            
            if(front->left)
            {
                parent[front->left] = front;
                q.push(front->left);
            }
            if(front->right)
            {
                parent[front->right] = front;
                q.push(front->right);
            }
        }
        return ans;
    }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        unordered_map<Node* , Node*> parents;
        Node*t = findParents(root , parents , target);
        
        vector<int> ans;
        queue<Node*> q;
        unordered_map<Node* , bool> visited;
        q.push(t);
        visited[t] = true;
        while(!q.empty())
        {
            int x = q.size();
            while(x--)
            {
                Node*front = q.front();
                q.pop();
                
                if(k==0) ans.push_back(front->data);
                if(front->left && visited[front->left] == false) 
                {
                    q.push(front->left);
                    visited[front->left] = true;
                }
                if(front->right && visited[front->right] == false)
                {
                    q.push(front->right);
                    visited[front->right] = true;
                }
                if(parents.find(front) != parents.end() && visited[parents[front]] == false)
                {
                      q.push(parents[front]);
                      visited[parents[front]] = true;
                }
            }
            k--;
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};

