class Solution {
  public:
  // pass as value
//   void findpath(Node* root,vector<vector<int>> &ans,vector<int>arr){
//       if(!root) return;
      
//       arr.push_back(root->data);
      
//       if(root->left==NULL && root->right==NULL){
//           ans.push_back(arr);
//           return;
//       }
      
//       findpath(root->left,ans,arr);
//       findpath(root->right,ans,arr);
      
//   }

// pass as reference arr no new copy is created of arr each time
void findpath(Node* root, vector<vector<int>> &ans, vector<int> &arr) {
      if (!root) return;
      arr.push_back(root->data);
      
      if (!root->left && !root->right) {
          ans.push_back(arr);
      } else {
          findpath(root->left, ans, arr);
          findpath(root->right, ans, arr);
      }

      arr.pop_back(); // Backtrack
  }
    vector<vector<int>> Paths(Node* root) {
        if(!root) return {};
        vector<vector<int>>ans;
        vector<int>arr;
        
        findpath(root,ans,arr);
        return ans;
        
    }
};
