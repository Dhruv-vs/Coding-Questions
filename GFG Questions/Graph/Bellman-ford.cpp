// User function Template for C++

class Solution {
  public:
  void Bellmon(vector<vector<int>>&edges,vector<int>&dist){
      for(int i=0;i<edges.size();i++){
          if(dist[edges[i][0]] != 1e8)  
          dist[edges[i][1]] = min(dist[edges[i][1]], dist[edges[i][0]] + edges[i][2]);
      }
  }
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int>dist(V,1e8);
        dist[src] = 0;
        
        for(int i=0;i<V-1;i++) Bellmon(edges,dist);
        
        vector<int>ans(V);
        for(int i=0;i<V;i++) ans[i] = dist[i];
        
        Bellmon(edges,dist);
        
        for(int i=0;i<V;i++){
            if(ans[i]!=dist[i]){
                vector<int>temp;
                temp.push_back(-1);
                return temp;
            }
        }
        return dist;
    }
};
