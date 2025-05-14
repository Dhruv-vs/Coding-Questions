class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        if(root==NULL) return {};
        
        queue<Node*>q;
        vector<vector<int>> ans;
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            vector<int>arr;
            
            for(int i=0;i<s;i++){
            Node* temp = q.front();
            q.pop();
            arr.push_back(temp->data);
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ans.push_back(arr);
        }
        return ans;
    }
};
