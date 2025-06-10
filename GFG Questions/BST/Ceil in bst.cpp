void find(Node* root,int input , int &ans){
    if(!root) return;
    
    if(root->data==input){
        ans = root->data;
        return;
    } 
    
    if(root->data>input){
        ans = root->data;
        find(root->left,input,ans);
    }
    else{
        find(root->right,input,ans);
    }
}
int findCeil(Node* root, int input) {
    int ans = -1;
    find(root,input,ans);
    return ans;
}
