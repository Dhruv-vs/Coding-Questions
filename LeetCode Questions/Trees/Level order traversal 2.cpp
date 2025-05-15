class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
            if(root==NULL) return {}; // imp condition
      vector<vector<int>> ans;
      queue<TreeNode*>q;
      q.push(root);

      while(!q.empty()){
        int s = q.size();
        vector<int>arr;

        for(int i=0;i<s;i++){
            TreeNode* temp = q.front();
            q.pop();
            arr.push_back(temp->val);

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ans.push_back(arr);
      }  
      int start=0,end=ans.size()-1;
      while(start<end){
        swap(ans[start],ans[end]);
        start++,end--;
      }
      return ans;
    }
};
