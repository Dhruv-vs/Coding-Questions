class Solution {
  public:
    int minRow(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int ans = INT_MAX;
        int index = -1;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]==1) count++;
            }
            if(count<ans) {
                ans = count;
                index = i+1;
            }
        }
        return index; 
    }
};
