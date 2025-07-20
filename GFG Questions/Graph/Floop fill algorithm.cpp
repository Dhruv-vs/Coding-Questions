class Solution {
  public:
  bool check(int i,int j,int row,int col){
      return i>-1&&i<row && j>-1&&j<col;
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int newColor) {
        int n = image.size();
        int m = image[0].size();
        int oldcolor = image[sr][sc];
        if (oldcolor == newColor) return image;
        
        int row[4] = {1,-1,0,0};
        int col[4] = {0,0,-1,1};
        
        queue<pair<pair<int,int>,int>>q;
        q.push({{sr,sc},image[sr][sc]}); // storing old color in queue
        image[sr][sc] = newColor; // changing the old with new
        
        int i,j;
        while(!q.empty()){
            i = q.front().first.first;
            j = q.front().first.second;
            oldcolor = q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++){
                if(check(i+row[k],j+col[k],n,m) && image[i+row[k]][j+col[k]]==oldcolor){
                    q.push({{i+row[k],j+col[k]},image[i+row[k]][j+col[k]]});
                    image[i+row[k]][j+col[k]] = newColor;
                }
            }
        }
        return image;
    }
};
