class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        vector<pair<int,int>> adj[V];
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        vector<bool> visited(V, false);
        int totalWeight = 0;

        pq.push({0, 0}); // {weight, node}

        while (!pq.empty()) {
            int wt = pq.top().first;
            int node = pq.top().second;
            
            pq.pop();
            if (visited[node]) continue;

            visited[node] = true;
            totalWeight += wt;

            for (int i = 0; i < adj[node].size(); i++) {
                int adjNode = adj[node][i].first;
                int edgeWt = adj[node][i].second;
                if (!visited[adjNode]) {
                    pq.push({edgeWt, adjNode});
                }
            }
        }

        return totalWeight; 
    }
