class Solution {
  public:
  void DFS(vector<vector<int>> &adj,vector<bool>&visit,int node){
      if(visit[node]) return;
      visit[node] = 1;
      
      for(int i=0;i<adj[node].size();i++){
          if(adj[node][i]) DFS(adj,visit,i); // if a edge exit then go there
      }
      return;
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        int count = 0;
        vector<bool>visit(V,0);
        for(int i=0;i<V;i++){
            if(!visit[i]){
                count++;
                DFS(adj,visit,i);
            }
        }
        return count;
    }
};
