int Solution::solve(vector<int> &A, int B) {
    if(B==0) return 0;
    int profit = 0;
    
    priority_queue<int>p;
    for(int i=0;i<A.size();i++){
        p.push(A[i]);
    }
    
    while(B && p.size()){
    int great = p.top();
    p.pop();
    profit += great;
    great--;
    p.push(great);
    B--;
    }
    return profit;
}
