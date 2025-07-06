int Solution::nchoc(int A, vector<int> &B) {
    long long int total = 0;
    priority_queue<int>p;
    for(int i=0;i<B.size();i++) p.push(B[i]);
    
    while(A-- && p.size()){
        int first = p.top();
        p.pop();
        total += first;
        p.push(floor(first/2));
    }
    
    return total%1000000007;
}
