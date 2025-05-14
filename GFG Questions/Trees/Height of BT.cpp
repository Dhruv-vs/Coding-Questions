class Solution {
  public:
    int height(Node* root) {
      // height in terms of no. of edges on longest path
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 0;
        
        int ans = max(height(root->left),height(root->right))+1;
        
        return ans;
    }
};
