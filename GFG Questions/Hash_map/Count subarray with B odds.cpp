int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int>m;
    int total = 0 , sum = 0;
    m[0] = 1;
    for(int i=0;i<A.size();i++){
        // if odd then only increase total or count of odd
        if(A[i]%2) total++;
        m[total]++;
        
        // if B==0
        if(B==0) sum+= m[total-B]-1;
        else if(m.count(total-B)) sum+= m[total-B]; 
    }
    return sum;
}
