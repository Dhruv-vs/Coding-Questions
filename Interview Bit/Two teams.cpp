bool isBipartite(vector<vector<int>>&adj,vector<int>&color,int start){
    queue<int>q;
    q.push(start);
    color[start] = 1;
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int neighbor:adj[node]){
            if(color[neighbor]==0){
                color[neighbor] = 3 - color[node]; // asign vice versa color to child 
                q.push(neighbor);
            }
            else if(color[neighbor]== color[node]) // if child have same color of parent
            return false;
        }
    }
    return true;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>>adj(A+1);
    for(int i=0;i<B.size();i++){
        int u = B[i][0];
        int v = B[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int>color(A+1,0);
    for(int i=1;i<=A;i++){
        if(color[i]==0){
            if(!isBipartite(adj,color,i)) return 0;
        }
    }
    return 1;
}
