class Solution {
  public:
// function to check the move is safe
  bool isSafe(int x, int y, vector<vector<int>>& maze, int n, vector<vector<int>>& visited) {
      if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && maze[x][y] == 1)
          return true;
      return false;
  }

  // Recursive function to find all paths
  void solve(int x, int y, vector<vector<int>>& maze, int n, vector<vector<int>>& visited, string path, vector<string>& ans) {
      // Base case
      if (x == n - 1 && y == n - 1) {
          ans.push_back(path);
          return;
      }

      // Mark current cell as visited
      visited[x][y] = 1;

      // ↓ Move Down
      if (isSafe(x + 1, y, maze, n, visited)) {
          solve(x + 1, y, maze, n, visited, path + 'D', ans);
      }

      // ← Move Left
      if (isSafe(x, y - 1, maze, n, visited)) {
          solve(x, y - 1, maze, n, visited, path + 'L', ans);
      }

      // → Move Right
      if (isSafe(x, y + 1, maze, n, visited)) {
          solve(x, y + 1, maze, n, visited, path + 'R', ans);
      }

      // ↑ Move Up
      if (isSafe(x - 1, y, maze, n, visited)) {
          solve(x - 1, y, maze, n, visited, path + 'U', ans);
      }

      // Backtrack unmark all 
      visited[x][y] = 0;
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {    
    int n = maze.size();
     vector<string> ans;
      vector<vector<int>> visited(n, vector<int>(n, 0));

      if (maze[0][0] == 0) // if start is 0 return 0
          return ans;

      string path = "";
      solve(0, 0, maze, n, visited, path, ans);
      
      sort(ans.begin(), ans.end()); // sort
      return ans;   
    }
};
