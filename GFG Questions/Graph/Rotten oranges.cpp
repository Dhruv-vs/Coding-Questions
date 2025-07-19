class Solution {
  public:
  bool check(int i,int j,int row,int col){
      return i>-1&&i<row && j>-1&&j<col;
  }
    int orangesRotting(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int goodOranges = 0;
        
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) goodOranges++;
                else if(mat[i][j]==2)
                q.push({{i,j},0}); // push row,col and timer initially 0
            }
        }
        
        int i,j,timer = 0;
        int row[4] = {-1,1,0,0};
        int col[4] = {0,0,-1,1};
        
        while(!q.empty()){
            i = q.front().first.first; // row
            j = q.front().first.second; // col
            timer = q.front().second;
            q.pop();
            
            // check for all the directions
            for(int k=0;k<4;k++){
                if(check(i+row[k],j+col[k],n,m) && mat[i+row[k]][j+col[k]]==1){
                    mat[i+row[k]][j+col[k]] = 0;
                    goodOranges--;
                    q.push({{i+row[k],j+col[k]},timer+1});
                }
            }
        }
        
        if(goodOranges) return -1;
        else return timer;
        
    }
};
