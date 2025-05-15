class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
       if(!root) return {};
       vector<int>ans;
       queue<Node*>q;
       q.push(root);
       
       while(!q.empty()){
           int size = q.size();
           ans.push_back(q.back()->data); // in right view push from back side of level
           
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
