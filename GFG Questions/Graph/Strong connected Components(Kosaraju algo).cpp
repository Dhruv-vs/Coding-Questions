//Position this line where user code will be pasted.
class Solution {
  public:
  void DFS(int node,vector<vector<int>>&adj,stack<int>&st,vector<bool>&visit){
      visit[node] = 1;
      for(int i=0;i<adj[node].size();i++){
          if(!visit[adj[node][i]]) DFS(adj[node][i],adj,st,visit);
      }
      st.push(node);
      return;
  }
  void SCC(int node,vector<bool>&visit,vector<vector<int>>&trans){
      visit[node] = 1;
      for(int i=0;i<trans[node].size();i++){
          if(!visit[trans[node][i]]) SCC(trans[node][i],visit,trans);
      }
  }
    int kosaraju(vector<vector<int>> &adj) {
        int V = adj.size();
         // modified topologial sort
         stack<int>st;
         vector<bool>visit(V,0);
         for(int i=0;i<V;i++){
             if(!visit[i]) DFS(i,adj,st,visit);
         }
         
         // transpose the graph
         vector<vector<int>>trans(V);
         for(int i=0;i<V;i++){
             for(int j=0;j<adj[i].size();j++){
                 trans[adj[i][j]].push_back(i);
             }
         }
         
         // Again DFS and count
         int count=0;
         for(int i=0;i<V;i++){
             visit[i]=0;
         }
         while(!st.empty()){
             if(!visit[st.top()]){
                 count++;
                 SCC(st.top(),visit,trans);
             }
             st.pop();
         }
         return count;
    }
};
