// By Both ways (DFS , BFS)

class Solution {
  public:
  bool dfs(int node,int parent,vector<vector<int>>&adj,vector<bool>&visited){
      visited[node] = true;
      for(int child:adj[node]){
          // if not visited
          if(!visited[child]){
              if(dfs(child,node,adj,visited)) return 1;
          }
          // if visited
          else if(child!=parent) return 1;
      }
      return 0;
  }
  
  bool bfs(int start,vector<vector<int>>&adj,vector<bool>&visited){
    queue<pair<int,int>>q;
    q.push({start,-1});
    visited[start]=1;
    
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push({neighbour,node}); // pushing node and parent
            }
            // if visited 
            else if(neighbour!=parent) return true;
        }
    }
    return false;
  }
  
    bool isCycle(int V,vector<vector<int>>& edges){
        vector<vector<int>>adj(V);
        // create adj List
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>visited(V,false);
        // Dfs method-
        // for(int i=0;i<V;i++){
        //     if(!visited[i]){
        //         if(dfs(i,-1,adj,visited)) return 1;
        //     }
        // }
        // return 0;
        
        // Bfs method-
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(bfs(i,adj,visited)) return 1;
            }
        }
        return 0;
    }
};
