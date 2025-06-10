class Solution {
  public:
    void find(Node* root,int K,int &ans){
        if(!root) return;
        
        int diff = abs(root->data-K);
        if(diff<ans) ans = diff;
        
        if (K<root->data)
            find(root->left,K,ans);
        else
            find(root->right,K,ans);
    }
    
    int minDiff(Node *root, int K) {
    int ans = INT_MAX;
    find(root,K,ans);
    return ans; 
    }
};
