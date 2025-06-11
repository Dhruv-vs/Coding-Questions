class Solution {
public:
void inorder(Node* root,Node*&prev,Node*&first,Node*&second){
    if(!root) return;
    
    inorder(root->left,prev,first,second);
    if(prev && root->data<prev->data){
        if(!first) first = prev; // just one time update first
        second = root; // everytime when cond. satisfy update second
    }
    prev = root; // updating prev
    
    inorder(root->right,prev,first,second);
}
    struct Node* correctBST(struct Node* root) {
        Node* prev = NULL;
        Node* first = NULL;
        Node* second = NULL;
        inorder(root,prev,first,second);
        if(first && second){
            swap(first->data,second->data);
        }
        return root;
    }
};
