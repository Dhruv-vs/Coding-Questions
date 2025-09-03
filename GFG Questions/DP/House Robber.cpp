class Solution {
  public:
  int find(int index,int n,vector<int>&arr,vector<int>&dp){
      if(index>=n) return 0;
      if(dp[index]!=-1) return dp[index];
      
      return dp[index] =  max((arr[index]+find(index+2,n,arr,dp)),find(index+1,n,arr,dp));
  }
    int findMaxSum(vector<int>& arr) {
    //   int n = arr.size();
    //   return find(0,n,arr);
    // the above will give TLE because of recusion 
    
    
     // Dp method - top down approach
    //     int n = arr.size();
    //     vector<int>dp(n+2,-1);
    //   return find(0,n,arr,dp);
      
      // Bottom up approach
      int n = arr.size();
        vector<int>dp(n+2,-1);
        dp[n] = 0;
        dp[n+1] = 0;

        for(int i=n-1;i>=0;i--){
            dp[i] = max((arr[i]+dp[i+2]),dp[i+1]);
        } 
        return dp[0];
    }
};
