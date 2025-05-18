class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        if(!root) return {};
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        stack<int>st;
        int levelodd = 0;
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node* temp = q.front();
                q.pop();
                
                if(levelodd%2==0) st.push(temp->data);
                else ans.push_back(temp->data);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            
            while(!st.empty()){
                int t = st.top();
                st.pop();
                ans.push_back(t);
            }
            levelodd = !levelodd;
        }
        return ans;
    }
};
