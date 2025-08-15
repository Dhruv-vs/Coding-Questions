class Solution {
  public:
  bool DFS(int node,int target,vector<vector<int>>&adj,vector<bool>&visited){
      if(node==target) return 1;
      
      visited[node] = 1;
      for(int child:adj[node]){
          if(!visited[child]){
              if(DFS(child,target,adj,visited)) return 1;
          }
      }
      return 0;
  }
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0;i<adj[c].size();i++){
            if(adj[c][i]==d){
                adj[c][i] = c;
                break;
            }
        }
        for(int i=0;i<adj[d].size();i++){
            if(adj[d][i]==c){
                adj[d][i] = d;
                break;
            }
        }
        
        vector<bool>visited(V,0);
        if(DFS(c,d,adj,visited)) return 0;
        return 1;
    }
};
