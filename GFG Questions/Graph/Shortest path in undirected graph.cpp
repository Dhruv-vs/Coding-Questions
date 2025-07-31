class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        //   int V = adj.size(); 
        // vector<int> dist(V, -1);
        // vector<bool> visited(V, false);

        // queue<pair<int, int>> q;
        // q.push({src, 0});
        // visited[src] = true;
        // dist[src] = 0;

        // while (!q.empty()) {
        //     int node = q.front().first;
        //     int d = q.front().second;
        //     q.pop();

        //     for (int neighbor : adj[node]) {
        //         if (!visited[neighbor]) {
        //             visited[neighbor] = true;
        //             dist[neighbor] = d + 1;
        //             q.push({neighbor, d + 1});
        //         }
        //     }
        // }
        // return dist;
        
        // without visited array 
        int V = adj.size();
        vector<int> dist(V, -1);

        queue<pair<int, int>> q;
        q.push({src, 0});
        dist[src] = 0;

        while (!q.empty()) {
            int node = q.front().first;
            int d = q.front().second;
            q.pop();

            for (int neighbor : adj[node]) {
                if (dist[neighbor] == -1) {
                    dist[neighbor] = d + 1;
                    q.push({neighbor, d + 1});
                }
            }
        }
        return dist;
    }
};
