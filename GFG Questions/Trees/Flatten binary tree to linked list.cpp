class Solution {
  public:
  void preorder(Node* root,queue<Node*>&q){
      if(!root) return;
      
      q.push(root);
      preorder(root->left,q);
      preorder(root->right,q);
  }
    void flatten(Node *root) {
    //   queue<Node*> q;
    //   preorder(root,q);
       
    //   root = q.front();
    //   q.pop();
    //   while(!q.empty()){
    //       root->left = NULL; // make left null for each node
    //       Node* temp = q.front();
    //       root->right = temp; 
    //       q.pop();
    //       root = root->right;
    //   }
       // the above solution requires O(N) time and O(N) space complexity
       
       // using morris traversal 
       while(root){
           // if left exist
           if(root->left){
               Node* curr = root->left;
               while(curr->right) curr = curr->right;
               
               curr->right = root->right;
               root->right = root->left;
               root->left = NULL;
               
               root = root->right;
           }
           else { // if left not exist
               root = root->right;
           }
       }
    }
};
