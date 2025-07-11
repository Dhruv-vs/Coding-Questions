vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,int>m;
    vector<int>ans;
    for(int i=0;i<A.size();i++){
        if(m.count(B-A[i])){
            ans.push_back(m[B-A[i]]+1);
            ans.push_back(i+1);
            return ans;
        }
        else{
            if(m.count(A[i])==0) m[A[i]] = i;
        }
    }
    return ans;
}
