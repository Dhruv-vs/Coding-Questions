// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int row = mat.size();
        int col = mat[0].size();
        int i=0,j=col-1;
      // fix a pointer to last position of matrix
        while(i<row && j>=0){
            if(mat[i][j]==x) return 1;
            else if(mat[i][j]<x) i++;  // move down
            else j--; // move left
        }
        return 0;
    }
};
