class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0,end=(row*col)-1,mid;
        // dont need for loop solved using 1D(virtually)
        while(start<=end){
            mid=start+ (end-start)/2;
            int row_index = mid/col;
            int col_index = mid%col;
            if(matrix[row_index][col_index]==target) return 1;
            else if(matrix[row_index][col_index]<target) start=mid+1;
            else end=mid-1;
        }
        return 0;
    }
};
