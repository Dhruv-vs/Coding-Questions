class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
       if(root==NULL) return 0;
       if(root->left == NULL && root->right==NULL) return 1;
       
       int ans = countLeaves(root->left)+countLeaves(root->right);
       return ans;
    }
};
