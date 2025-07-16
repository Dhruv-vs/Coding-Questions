class Solution {
  public:
  void dfshelper(int node,vector<vector<int>>& adj,vector<bool>&visited,vector<int>&ans){
      visited[node] = true;
      ans.push_back(node);
      
      for(int child:adj[node]){
          if(!visited[child]) dfshelper(child,adj,visited,ans);
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int>ans;
        vector<bool>visited(n,0);
        
        dfshelper(0,adj,visited,ans);
        return ans;
    }
};
