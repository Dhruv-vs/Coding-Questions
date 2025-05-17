class Solution {
  public:
  void pathsum(Node* root,int &maxsum, int currsum , int currlen, int &maxlen){
      if(!root) return;
      currsum += root->data;
      currlen +=1;
      if(root->left==NULL && root->right==NULL){
          if(currlen>maxlen){
              maxlen = currlen;
              maxsum = currsum;
          }
          else if(maxlen==currlen){ 
          maxsum = max(maxsum,currsum);
          }
          return;
        }
      
      pathsum(root->left,maxsum,currsum,currlen,maxlen);
      pathsum(root->right,maxsum,currsum,currlen,maxlen);
  }
    int sumOfLongRootToLeafPath(Node *root) {
        int maxsum = 0;
        int currsum = 0;
        int currlen = 0;
        int maxlen = 0;
        pathsum(root,maxsum,currsum,currlen,maxlen);
        return maxsum;
    }
};
