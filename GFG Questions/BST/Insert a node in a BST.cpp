class Solution {
  public:
    Node* insert(Node* root, int key) {
        if(!root){
            root = new Node(key);
            return root;
        }
        if(root->data == key) return root;
        
        if(root->data>key){
            root->left = insert(root->left,key);
            return root;
        }
        else{
            root->right = insert(root->right,key);
            return root;
        }
    }
};
