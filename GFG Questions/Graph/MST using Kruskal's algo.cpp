class Solution {
  public:
  int findParent(int node, vector<int> &parent) {
        if (parent[node] == node) return node;
        return parent[node] = findParent(parent[node], parent);
    }

    void unionSet(int u, int v, vector<int> &parent,vector<int>&rank) {
        // ultimate parent of u and v
        int pu = findParent(u, parent);
        int pv = findParent(v, parent);
        
        if (pu != pv) {
            if (rank[pu] < rank[pv]) {
                parent[pu] = pv;
            } else if (rank[pv] < rank[pu]) {
                parent[pv] = pu;
            } else {
                parent[pv] = pu;
                rank[pu]++;
            }
        }
    }
    int spanningTree(int V, vector<vector<int>>& edges) {
       // Min-heap: {weight, {u, v}}
        priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> pq;

        // Push all edges into pq
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            pq.push({w, {u, v}});
        }

        vector<int> parent(V);
        for (int i = 0; i < V; i++) parent[i] = i;
        vector<int> rank(V,0);
        int totalWeight = 0;

        // Process until pq empty
        while (!pq.empty()) {
            int w = pq.top().first;
            int u = pq.top().second.first;
            int v = pq.top().second.second;
            pq.pop();

            if (findParent(u, parent) != findParent(v, parent)) {
                totalWeight += w;
                unionSet(u, v, parent,rank);
            }
        }

        return totalWeight;
    }
};
