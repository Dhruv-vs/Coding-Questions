class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
       // inorder traversal in O(1) space by Morris traversal
       
       vector<int>ans;
       
       // if left not exist directly print
       while(root){
       if(!root->left){
        ans.push_back(root->data);
        root = root->right;
       }
       else {
           Node* curr = root->left;
           while(curr->right && curr->right!=root) curr = curr->right;
           
           // if current right is null means no link is there so create link
           if(!curr->right){
               curr->right = root;
               root = root->left;
           }
           // if link is there then break the link and push the present root node
           else{
               curr->right = NULL;
               ans.push_back(root->data);
               root = root->right;
           }
       }
    }
       return ans;
    }
};
