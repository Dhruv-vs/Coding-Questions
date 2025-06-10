class Solution {

  public:
  void find(Node* root,int input , int &ans){
    if(!root) return;
    
    if(root->data==input){
        ans = root->data;
        return;
    } 
    
    if(root->data<input){
        ans = root->data;
        find(root->right,input,ans);
    }
    else{
        find(root->left,input,ans);
    }
}
    int floor(Node* root, int x) {
    int ans = -1;
    find(root,x,ans);
    return ans;
    }
};
