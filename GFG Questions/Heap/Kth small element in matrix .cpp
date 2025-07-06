class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
       priority_queue<int,vector<int>,greater<int> >p;
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               p.push(matrix[i][j]);
           }
       }
        int ans = 0;
        while(k--){
            ans = p.top();
            p.pop();
        }
        return ans;
    }
};
