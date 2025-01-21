class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // time complexity O(n*m)
        // int n = arr.size();
        // int m = arr[0].size();
        // int ans = -1;
        // int index = -1;
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<m;j++){
        //         if(arr[i][j]==1) count++;
        //     }
        //     if(count!=0 && count>ans) {
        //         ans = count;
        //         index = i;
        //     }
        // }
        // return index;
        
        // time complexity O(n+m)
        int n= arr.size();
        int m= arr[0].size();
        int row = -1;
        int j = m-1; //point to first row last index;
        for(int i=0;i<n;i++){
            while(j>=0 && arr[i][j]==1){
                // row = i will only update if it found more 1 in next row
                row = i; // updating the row with index containing max 1 
                j--;
            }
        }
        return row;
    }
};
