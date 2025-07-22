class Solution {
  public:
  void dfs(vector<vector<int>>&adj,stack<int>&st,vector<bool>&visited,int node){
      visited[node] = 1;
      
      for(int child:adj[node]){
          if(!visited[child]) dfs(adj,st,visited,child);
      }
      
      st.push(node);
      return;
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
         int u = edges[i][0];
         int v = edges[i][1];
         adj[u].push_back(v);
        }
        
        stack<int>st;
        vector<bool>visited(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i]) dfs(adj,st,visited,i);
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
