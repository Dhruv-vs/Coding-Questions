// User function Template for C++

class Solution {
  public:
  bool check(int i,int j,int row, int col){
      return i>-1&&i<row && j>-1&&j<col;
  }
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<pair<int,int>,int>>q;
        
        q.push({{source.first,source.second},0});
        
        int i,j,steps = 0;
        int row[4] = {-1,1,0,0};
        int col[4] = {0,0,-1,1};
        
            while(!q.empty()){
            i = q.front().first.first;
            j = q.front().first.second;
            steps = q.front().second;
            q.pop();
            if(i==destination.first && j==destination.second) return steps;
            
            // check for all the directions
            for(int k=0;k<4;k++){
                if(check(i+row[k],j+col[k],n,m) && grid[i+row[k]][j+col[k]]==1){
                    q.push({{i+row[k],j+col[k]},steps+1});
                    grid[i+row[k]][j+col[k]] = 0;
                }
            }
        }
        return -1;
    }
};
