vector<int> Solution::solve(vector<vector<int> > &A) {
    vector<int>ans;
    int row = A.size();
    int col = A[0].size();
    
    // creating min heap
    // priority_queue<int,vector<int>,greater<int> >minheap; // simple minheap
    
    // minheap contains pair replace int with pairs
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> >minheap;
    
    for(int i=0;i<row;i++) minheap.push(make_pair(A[i][0],make_pair(i,0)));
    
    pair<int,pair<int,int>>p;
    while(!minheap.empty())
    {
    p = minheap.top(); // copying top in pair p
    // get min 
    ans.push_back(p.first);
    row = p.second.first;
    col = p.second.second;
    
    minheap.pop();
    
    // insert if col is valid in minheap
    if(col<A[0].size()-1)
    minheap.push(make_pair(A[row][col+1],make_pair(row,col+1)));   
    }
    return ans;
}
