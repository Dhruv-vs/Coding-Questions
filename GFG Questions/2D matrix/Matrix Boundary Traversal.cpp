class Solution {
  public:
    // Function to return list of integers that form the boundary
    // traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> >& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        if (n == 0 || m == 0)
            return ans;

        // Traverse top row
        for (int i = 0; i < m; ++i) {
            ans.push_back(mat[0][i]);
        }

        // Traverse right column (excluding the first and last rows)
        for (int i = 1; i < n; ++i) {
            ans.push_back(mat[i][m - 1]);
        }

        // Traverse bottom row (if there is more than one row)
        if (n > 1) {
            for (int i = m - 2; i >= 0; --i) {
                ans.push_back(mat[n - 1][i]);
            }
        }

        // Traverse left column (if there is more than one column and more than one row)
        if (m > 1) {
            for (int i = n - 2; i > 0; --i) {
                ans.push_back(mat[i][0]);
            }
        }

        return ans;
    }
};
