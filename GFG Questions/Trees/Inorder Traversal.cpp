class Solution {
  public:
    void pre(Node* root,vector<int> &ans){
        if(root==NULL) return;
        
        pre(root->left,ans);
        ans.push_back(root->data);
        pre(root->right,ans);
    }
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};
