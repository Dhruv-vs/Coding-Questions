class Solution {
  public:
  int find(Node* root,int &sum){
      if(!root) return 0;
      if(!root->left && !root->right) return root->data;
      
      int left = find(root->left,sum);
      int right = find(root->right,sum);

    // if both left and right exist then only update sum
      if(root->left && root->right){
      sum = max(sum,left+right+root->data);
      return max(root->data+left, root->data+right);
      }
    // if not then return what exist with current node
      if(root->left){
          return root->data+left;
      }
      else return root->data+right;
  }
    int maxPathSum(Node* root) {
      int sum = INT_MIN;
      int val = find(root,sum);
      // if the sum is not updated means no left right in entire tree then return the single path sum
      if (sum == INT_MIN) return val;
      if(root->left && root->right) return sum; // if both exist means some path exists
      return max(sum,val);
    }
}; 
