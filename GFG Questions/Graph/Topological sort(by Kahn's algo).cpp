    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
         int u = edges[i][0];
         int v = edges[i][1];
         adj[u].push_back(v);
        }
        
        // BY Kahn's algorithm
        vector<int> indegree(V, 0);
        for (int i = 0; i < V; i++) {
        for (int neighbor : adj[i]) {
        indegree[neighbor]++;
        }
        }
        
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        
        vector<int>ans;
        int node;
        
        while(!q.empty()){
            node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(int child:adj[node]){
                indegree[child]--;
                if(indegree[child]==0) q.push(child);
            }
        }
        return ans;
    }
};
