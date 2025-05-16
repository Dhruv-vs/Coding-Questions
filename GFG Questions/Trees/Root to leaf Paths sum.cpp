class Solution {
  public:
  void Findsum(Node* root,int &sum,int num){
      if(!root) return;
      num+=root->data;
      if(root->left==NULL && root->right==NULL){
          sum+=num;
          return;
      }
      
      Findsum(root->left,sum,num*10);
      Findsum(root->right,sum,num*10);
  }
    int treePathsSum(Node *root) {
        int sum =0;
        int num =0;
        
        Findsum(root,sum,num);
        return sum;
    }
};
