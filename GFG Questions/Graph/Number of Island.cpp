class Solution {
  public:
  bool check(int i,int j,int row,int col){
      return i>-1&&i<row && j>-1&&j<col;
  }
  void BFS(vector<vector<char>>&grid,int i,int j){
      int n = grid.size();
      int m = grid[0].size();
      
      queue<pair<int,int>>q;
      int row[8] = {-1,1,0,0,-1,1,-1,1};
      int col[8] = { 0,0,-1,1,-1,1,1,-1};
      q.push({i,j});
      
      while(!q.empty()){
          i = q.front().first;
          j = q.front().second;
          q.pop();
          for(int k=0;k<8;k++){
              if(check(i+row[k],j+col[k],n,m) && grid[i+row[k]][j+col[k]]=='L'){
                  grid[i+row[k]][j+col[k]]='W';
                  q.push({i+row[k],j+col[k]});
              }
          }
      }
  }
    int countIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L'){
                    grid[i][j] = 'W';
                    count++;
                    BFS(grid,i,j);
                }
            }
        }
        return count;
    }
};
