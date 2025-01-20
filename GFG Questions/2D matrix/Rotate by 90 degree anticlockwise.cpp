
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        //first reverse the rows
        int n= mat.size();
       for(int i=0;i<n;i++){
           int start=0,end=n-1;
           while(start<end){
               swap(mat[i][start],mat[i][end]);
               start++,end--;
           }
       }
       // then transpose
       for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
               swap(mat[i][j],mat[j][i]);
           }
       }
    }
};
