// User function Template for C++
class Solution {
  public:
  bool check(int i,int j,int row,int col){
      return i>-1&&i<row && j>-1&&j<col;
  }
    vector<vector<char>> fill(vector<vector<char>>& mat) {
       int n = mat.size();
       int m = mat[0].size();
       vector<vector<char>>ans(n,vector<char>(m,'X'));
       
       queue<pair<int,int>>q;
       // push all boundary's O in queue
       // up
       for(int i=0;i<m;i++){
           if(mat[0][i]=='O'){
               q.push({0,i});
               ans[0][i] = 'O';
           }
       }
       // down
       for(int i=0;i<m;i++){
           if(mat[n-1][i]=='O'){
               q.push({n-1,i});
               ans[n-1][i] = 'O'; 
           }
       }
       // left 
       for(int i=1;i<n-1;i++){
           if(mat[i][0]=='O'){
               q.push({i,0});
               ans[i][0] = 'O';
           }
       }
       // right
       for(int i=1;i<n-1;i++){
           if(mat[i][m-1]=='O'){
               q.push({i,m-1});
           ans[i][m-1] = 'O';
           }
       }
       
       int u,v=0;
       int row[4] = {-1,1,0,0};
       int col[4] = {0,0,-1,1};
       while(!q.empty()){
           u = q.front().first;
           v = q.front().second;
           q.pop();
           
           for(int k=0;k<4;k++){
               if(check(u+row[k],v+col[k],n,m) && mat[u+row[k]][v+col[k]]=='O' && ans[u+row[k]][v+col[k]]=='X'){
                   q.push({u+row[k],v+col[k]});
                  ans[u+row[k]][v+col[k]] = 'O';
               }
           }
       }
       mat = ans;
       return mat;
    }
};
