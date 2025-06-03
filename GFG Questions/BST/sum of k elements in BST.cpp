void find(Node* root,int &sumVal,int &k){
     if (!root || k <= 0) return;

    find(root->left, sumVal, k);

    if (k > 0) {
        sumVal += root->data;
        k--;
    }

    find(root->right, sumVal, k);
}
int sum(Node* root, int k) {

    int sumVal = 0;
    find(root, sumVal, k);
    return sumVal;
}
