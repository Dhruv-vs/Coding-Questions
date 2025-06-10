class Solution {
  public:
    // Function that constructs BST from its preorder traversal.
    Node* find(int pre[],int min,int max,int &index,int size){
        if(index>=size || pre[index]>max) return NULL;
        
        Node* root = new Node();
        root->data = pre[index];
        index++;
        
        if(index==size) return root;
        
        root->left = find(pre,min,root->data,index,size);
        root->right = find(pre,root->data,max,index,size);
        
        return root;
    }
    Node* Bst(int pre[], int size) {
        int min = INT_MIN,max = INT_MAX,index = 0;
        return find(pre,min,max,index,size);
    }
};
