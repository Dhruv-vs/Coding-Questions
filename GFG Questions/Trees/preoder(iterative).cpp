class Solution {
  public:
    vector<int> preOrder(Node* root) {
        vector<int>ans;
        stack<Node*>st;
        st.push(root);
        
        Node* temp;
        while(!st.empty()){
            temp = st.top();
            st.pop();
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
            
            ans.push_back(temp->data);
        }
        return ans;
    }
};
