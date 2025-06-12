class Solution {

  public:
  void inorder(Node* root,vector<int>&ans){
      if(!root) return;
      
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
  }
  Node* CreateBBST(vector<int>&ans,int start,int end){
      if(start>end) return NULL;
      int mid = start+(end-start)/2;
      
      Node* root = new Node(ans[mid]);
      
      root->left = CreateBBST(ans,start,mid-1);
      root->right = CreateBBST(ans,mid+1,end);
      
      return root;
  }
    Node* balanceBST(Node* root) {
       vector<int>ans;
       inorder(root,ans);
       int n = ans.size();
       Node* bal = CreateBBST(ans,0,n-1);
       return bal;
    }
};
