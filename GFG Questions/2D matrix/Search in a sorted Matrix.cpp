class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int start=0,end=n*m-1,mid;
        
        while(start<=end){
            mid = start+ (end-start)/2;
            int row_index = mid/m;
            int col_index = mid%m;
            if(mat[row_index][col_index]==x) return 1;
            else if(mat[row_index][col_index]<x) start=mid+1;
            else end=mid-1;
        }
        return 0;
    }
};
