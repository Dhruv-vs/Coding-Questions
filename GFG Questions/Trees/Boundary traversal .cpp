void Left_sub(Node* root,vector<int>&ans){
    if(!root) return;
    // dont include leaf because it will be calculated in next part
    if(!root->left && !root->right) return;
    
    ans.push_back(root->data);
    // priority left first if left not present then go to right
    if(root->left) Left_sub(root->left,ans);
    else Left_sub(root->right,ans);
    return;
}

void leaf(Node* root,vector<int>&ans){
    if(!root) return;
    if(!root->left && !root->right){
        ans.push_back(root->data);
        return;
    }
    
    leaf(root->left,ans);
    leaf(root->right,ans);
    return;
}

void Right_sub(Node* root,vector<int>&ans){
    if(!root) return;
    if(!root->left && !root->right) return;
    
    // priority right over left
    if(root->right) Right_sub(root->right,ans);
    else Right_sub(root->left,ans);
    
    // print the nodes of rightmost in reverse order so push cond. in last
    ans.push_back(root->data);
    return;
}

class Solution {
  public:
    vector<int> boundaryTraversal(Node *root) {
       vector<int>ans;
       ans.push_back(root->data);
       
       Left_sub(root->left,ans);
       if(root->left || root->right){
           leaf(root,ans);
       }
       Right_sub(root->right,ans);
       return ans;
    }
};
