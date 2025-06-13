class Solution {
  public:
    // Function to delete a node from BST.
    Node* minimum(Node* root){
        Node* current = root;
        while(current && current->left){
            current = current->left;
        }
        return current;
    }
    Node *deleteNode(Node *root, int X) {
        if(!root) return NULL;
        
        if(root->data==X){
            // 0 child or leaf
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }
            // 1 left child
            else if(!root->right && root->left){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            // 1 right child
            else if(!root->left && root->right){
                Node* temp = root->right;
                delete root;
                return temp;
            }
            // both left and right child is there
            else{
                Node* temp = minimum(root->right);
                root->data = temp->data;
                root->right = deleteNode(root->right,temp->data);
            }
        }
        else if(root->data>X){
            root->left = deleteNode(root->left,X);
        }
        else
        root->right = deleteNode(root->right,X);
        
        return root;
    }
};
