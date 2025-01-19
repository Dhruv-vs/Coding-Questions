class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int i=0,j=col-1;
       // // pointer position at matrix[i][j] ie 15
        while(i<row && j>=0){
            if(matrix[i][j]==target) return 1;
            else if(matrix[i][j]<target) i++; // down move
            else j--; // left move
        }

        // pointer position at matrix[i][j] ie 18
        // int i=row-1,j=0;
        // while(i>=0 && j<col){
        //     if(matrix[i][j]==target) return 1;
        //     else if(matrix[i][j]<target) j++; // move right
        //     else i--; //move up
        // }
        return 0;
    }
};
