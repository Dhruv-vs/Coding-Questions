class Solution {
  public:
    vector<int> leftView(Node *root) {
        // iterative method
        if(!root) return {};
       vector<int>ans;
       queue<Node*>q;
       q.push(root);
       
       while(!q.empty()){
           int size = q.size();
           ans.push_back(q.front()->data);
           
           while(size--){
               Node* temp = q.front();
               q.pop();
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
           }
       }
       return ans;
    }
};
