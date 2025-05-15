class Solution {
  public:
  int find(Node* root,int &ans){
      if(!root) return 0;
      
      int left = find(root->left,ans);
      int right = find(root->right,ans);
      
      ans = max(ans , left+right);
      
      return 1+max(left,right);
  }
    int diameter(Node* root) {
        int ans=0; // initially diameter 0
        find(root,ans);
        return ans;
    }
};
