class Solution {
public:
bool check(int i,int j,int row, int col){
      return i>-1&&i<row && j>-1&&j<col;
  }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<pair<int,int>,int>>q;
        if(grid[0][0]==1) return -1;
        q.push({{0,0},1});
        
        int i,j,steps = 0;
        int row[8] = {-1,1,0,0,-1,1,-1,1};
        int col[8] = {0,0,-1,1,-1,1,1,-1};
        
            while(!q.empty()){
            i = q.front().first.first;
            j = q.front().first.second;
            steps = q.front().second;
            q.pop();
            if(i==n-1 && j==n-1) return steps;
            
            // check for all the directions
            for(int k=0;k<8;k++){
                if(check(i+row[k],j+col[k],n,m) && grid[i+row[k]][j+col[k]]==0){
                    q.push({{i+row[k],j+col[k]},steps+1});
                    grid[i+row[k]][j+col[k]] = 1;
                }
            }
        }
        return -1;
    }
};
