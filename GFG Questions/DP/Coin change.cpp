class Solution {
  public:
      int possible(int index,vector<int>&coins,int size,int sum){
        if(sum==0) return 1;
        if(index>=size) return 0;
        if(sum<0) return 0;
        
        return possible(index,coins,size,sum-coins[index])+
        possible(index+1,coins,size,sum);
    }
    int count(vector<int>& coins, int amount) {
        // Recursive method
        // int n = coins.size();
        // return possible(0,coins,n,amount);
        
        // Optimised DP Bottom up approach
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,0));
        for(int i=0;i<=n;i++) dp[i][0] = 1; // filling col amount=0 to 1

        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]>j) dp[i][j] = dp[i-1][j];
                else dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
            }
        }
        return dp[n][amount];
    }
};
