class Solution {
  public:
    vector<int> largestValues(Node* root) {
        if(!root) return {};
        vector<int>ans;
        queue<Node*>q;
        int maxval = INT_MIN;
        
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            
            while(size--){
                Node* temp = q.front();
                q.pop();
                if(temp->data>maxval) maxval = temp->data;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(maxval);
            maxval = INT_MIN;
        }
        return ans;
    }
};
