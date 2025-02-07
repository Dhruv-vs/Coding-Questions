class Solution {
  public:
    // Function to find minimum number of operations that are required
    // to make the matrix beautiful.
    int findMinOperation(vector<vector<int> >& mat) {
        int n = mat.size();
        int maxSum = 0, totalOperations = 0;

        // Calculate row sums, column sums, and find the max sum
        for (int i = 0; i < n; i++) {
            int rowSum = 0, colSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += mat[i][j];  // Sum of row i
                colSum += mat[j][i];  // Sum of column i
            }
            maxSum = max({maxSum, rowSum, colSum});
        }

        // Compute required operations to make all row sums equal to maxSum
        for (int i = 0; i < n; i++) {
            int rowSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += mat[i][j];  // Sum of row i
            }
            totalOperations += (maxSum - rowSum); // Needed increments for row i
        }

        return totalOperations;
    }
};
