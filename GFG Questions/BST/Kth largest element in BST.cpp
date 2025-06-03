class Solution {
  public:
  void inorder(Node* root,vector<int>&ans){
      if(!root) return;
      
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
  }
  
  
  void find(Node* root,int &ans,int &k){
     if(!root) return;
     if(k<0) return; // run till k == 0;
     
     find(root->right,ans,k);// first go to right
     k--;
     if(k==0){ // then root
         ans = root->data;
         return;
     }
     find(root->left,ans,k); // then left
  }
    int kthLargest(Node *root, int k) {
        // first method by creating extra space of vector 
        // vector<int>ans;
        // inorder(root,ans);
        // int n = ans.size();
        // return ans[n-k];
        
        // second method without taking extra space 
        
        int ans = 0;
        find(root,ans,k);
        return ans;
    }
};
