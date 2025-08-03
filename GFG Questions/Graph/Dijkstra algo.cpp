// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<int> dist(V, -1);

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        pq.push({0, src});

        while (!pq.empty()) {
            int d = pq.top().first; // distance
            int node = pq.top().second; // node
            pq.pop();

            if(dist[node]!=-1) continue;
            
            dist[node] = d;

            for (int i = 0; i < adj[node].size(); i++) {
                int nbr = adj[node][i].first;
                int wt = adj[node][i].second;

                if (dist[nbr] == -1) {
                    pq.push({d+wt, nbr});
                }
            }
        }

        return dist;
        
    }
};
