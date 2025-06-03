class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void find(Node* root,int &k,int &ans){
        if(!root || k<0) return;
        
        find(root->left,k,ans);
        k--;
        if(k==0){
            ans = root->data;
            return;
        }
        find(root->right,k,ans);
    }
    int kthSmallest(Node *root, int k) {
        int ans = 0;
        find(root,k,ans);
        if(ans==0) return -1;
        return ans;
    }
};
