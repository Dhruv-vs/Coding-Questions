class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
       stack<int>st;
       int n = mat.size();
       for(int i=n-1;i>=0;i--){
           st.push(i);
       }
       int first,second;
       while(st.size()>1){
           first = st.top();
           st.pop();
           second = st.top();
           st.pop();
           
           if(mat[first][second] && !mat[second][first])
           st.push(second);
           else if(!mat[first][second] && mat[second][first])
           st.push(first);
       }
       
       if(st.empty()) return -1;
       
       int num = st.top();
       st.pop();
       
       // if num is celebrity then row sum = 0 and col sum = n-1
       int row = 0, col = 0;
       for(int i=0;i<n;i++){
          if(i==num) continue; // celebrity know himself 
           row += mat[num][i];
           col += mat[i][num];
       }
       
       return row==0&&col==n-1 ? num : -1;
    }
};
