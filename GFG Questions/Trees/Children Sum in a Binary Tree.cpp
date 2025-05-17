class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int findsum(Node* root,bool &ans){
        if(!root) return 0;
        if(root->left== NULL && root->right==NULL) return root->data;
        
        int left = findsum(root->left,ans);
        int right = findsum(root->right,ans);
        
        if((left+right)!=root->data) ans =0;
        
        return root->data; // return data to parent node also 
    }
    int isSumProperty(Node *root) {
       bool ans = 1;
       findsum(root,ans);
       return ans;
    }
};
