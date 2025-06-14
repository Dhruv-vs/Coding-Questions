class Solution {
  public:
  void check(Node* root1 , Node* root2,bool &ans){
      if(!root1 && !root2) return;
      if((!root1&&root2) || (!root2 && root1)){
          ans = 0;
          return;
      }
      if(root1->data!=root2->data){
          ans = 0;
          return;
      }
      check(root1->left,root2->right,ans);
      check(root1->right,root2->left,ans);
  }
    bool isSymmetric(Node* root) {
        // created two copies 
        // Node* root1 = root;
        // Node* root2 = root;
        // bool ans = 1;
        // check(root1,root2,ans);
        // return ans;
        
        // better way without creating copies
        bool ans = 1;
        check(root->left,root->right,ans); // here one node points to left and other to right
        return ans;
    }
};
