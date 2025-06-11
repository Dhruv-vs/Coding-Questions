
class Solution {
  public:
  void inorder(Node* root,vector<int>&ans){
      if(!root) return;
      
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
  }
    int absolute_diff(Node *root) {
        vector<int>ans;
        inorder(root,ans);
        int n = ans.size();
        int result = INT_MAX;
        for(int i=0;i<n-1;i++){
            int diff = abs(ans[i]-ans[i+1]);
            result = min(diff,result);
        }
        return result;
    }
};
