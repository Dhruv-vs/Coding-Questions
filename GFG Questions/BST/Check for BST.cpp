class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void inorder(Node* root,int &ans,int & prev){
        if(!root) return;
        
        inorder(root->left,ans,prev);
        if(prev<root->data){
            prev = root->data;
        }
        else ans = 0;
        inorder(root->right,ans,prev);
    }
    bool isBST(Node* root) {
        // Your code here
        int prev = INT_MIN;
        int ans = 1;
        inorder(root,ans,prev);
        return ans;
    }
};
