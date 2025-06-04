class Solution {
  public:
    void find(Node* root,Node* &ans,bool &flag,Node* x){
        if(!root || ans) return;
        
        find(root->left,ans,flag,x);
        if(flag && !ans){ 
            // !ans means that if ans is null then only update just 1 time only
            ans = root;
            return;
        }
        
        if(root==x){
            flag = 1;
        }
        find(root->right,ans,flag,x);
    }
    int inOrderSuccessor(Node *root, Node *x) {
         Node* ans = NULL;
         bool flag = 0;
         find(root,ans,flag,x);
         if(ans==NULL) return -1;
         return ans->data;
    }
};
