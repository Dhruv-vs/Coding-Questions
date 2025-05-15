class Solution {
  public:
  int sum(Node* root,bool &ans){
      if(!root) return 0;
      // to handle leaf node as when leaf node return the data itself
      if(root->left==NULL && root->right==NULL) return root->data;
      int left = sum(root->left,ans);
      int right = sum(root->right,ans);
      
      if((left+right)!=root->data) ans=0;
      
      return root->data+left+right;
  }
    bool isSumTree(Node* root) {
        bool ans = 1;
        sum(root,ans);
        return ans;
    }
};
