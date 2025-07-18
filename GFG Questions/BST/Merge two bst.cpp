class Solution {
  public:
    void inorder(Node* root,vector<int>&ans){
        if(!root) return;
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    vector<int> merge(Node *root1, Node *root2) {
        vector<int>ans;
        inorder(root1,ans);
        inorder(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
