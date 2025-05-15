class Solution {
  public:
  int height(Node* root,bool &ans){
      if(!root) return 0;
      
      int left = height(root->left,ans);
      int right = height(root->right,ans);
      
      if(abs(left-right)>1) ans = 0;
      
      return 1+max(left,right); // 1 is for including current node
      // in quesitons we write +1 to add current node but in edges there is changes in base case
  }
    bool isBalanced(Node* root) {
       bool ans = 1;
       height(root,ans);
       return ans;
    }
};
