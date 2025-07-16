int n = adj.size(); // number of vertices
        vector<int> result;
        vector<bool> visited(n, false);
        queue<int> q;

        // Start BFS from node 0 (as per standard convention)
        visited[0] = true;
        q.push(0);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            result.push_back(node);

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return result;
