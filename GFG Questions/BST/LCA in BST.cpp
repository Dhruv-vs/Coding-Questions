class Solution {
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        if(!root) return NULL;
        int curr = root->data;
        
        if(n1->data<curr && n2->data<curr){ // if both are small then root move left to find
            return LCA(root->left,n1,n2);
        }
        else if(n1->data>curr && n2->data>curr){ // else if both are greater move right 
            return LCA(root->right,n1,n2);
        }
        return root; // if one is greater and other is smaller that that node is the answer return it
    }
};
