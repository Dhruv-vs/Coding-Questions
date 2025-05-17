class Solution {
  public:
    vector<int> postOrder(Node* root) {
      vector<int>ans;
      stack<Node*>st;
      st.push(root);
      // perform preoder in order Node Right Left 
      // push Left first in stack then right 
      // earlier we push right first then left
      Node* temp;
      while(!st.empty()){
          temp = st.top();
          st.pop();
          
          if(temp->left) st.push(temp->left);
          if(temp->right) st.push(temp->right);
          
          ans.push_back(temp->data);
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
