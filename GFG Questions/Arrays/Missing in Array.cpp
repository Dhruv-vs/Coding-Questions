class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size()+1;
        int xorArr = 0;
// first xor of given elements
        for(int i=0;i<arr.size();i++) xorArr ^= arr[i];
        int xorTotal = 0;
// then xor of elements from 1 to n 
        for(int i=1;i<=n;i++) xorTotal ^= i;
// final xor of total to given gives missing
        return xorTotal^xorArr;
    }
};
