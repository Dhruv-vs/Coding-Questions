class Solution {
  public:
  bool DFS(vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&path,int node){
      visited[node] = 1;
      path[node] = 1;
      
      for(int neighbor:adj[node]){
          if(!visited[neighbor]){
              if(DFS(adj,visited,path,neighbor)) return 1;
          }
          else if(path[neighbor]==1) return 1;
      }
      
      path[node] = 0;
      return 0;
  }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // creating a adjanecy list
        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
         int u = edges[i][0];
         int v = edges[i][1];
         adj[u].push_back(v);
        }
        
        vector<bool>visited(V,0);
        vector<bool>path(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(DFS(adj,visited,path,i)) return 1;
            }
        }
        return 0;
    }
};
