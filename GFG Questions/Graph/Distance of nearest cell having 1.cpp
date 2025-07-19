class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    bool check(int i,int j,int row,int col){
        return i>-1&& i<row && j>-1&&j<col;
    }
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans[i][j] = 0; // for 1 fill 0 as min dis is 0
                    q.push({i,j});
                }
            }
        }
        
        int i,j=0;
        int row[4] = {-1,1,0,0};
        int col[4] = {0,0,-1,1};
        
        while(!q.empty()){
            i = q.front().first;
            j = q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++){
                if(check(i+row[k],j+col[k],n,m) && grid[i+row[k]][j+col[k]]==0){
                    grid[i+row[k]][j+col[k]] =1;
                    // add the distance from the 1 to 0 ie nearest is +1;
                    ans[i+row[k]][j+col[k]] = ans[i][j] + 1;
                    q.push({i+row[k],j+col[k]});
                }
            }
        }
        return ans;
    }
};
