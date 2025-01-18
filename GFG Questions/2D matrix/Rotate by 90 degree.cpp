// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // first transpose
    // we run i loop from 0 to n-1 as last is not needed 
    // and j loop start from i+1 to prevent repetition
    for(int i=0;i<mat.size()-1;i++){
        for(int j=i+1;j<mat.size();j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    // then reverse the row
    for(int i=0;i<mat.size();i++){
        int start=0,end=mat.size()-1;
        while(start<end){
            swap(mat[i][start],mat[i][end]);
            start++,end--;
        }
    }
}
