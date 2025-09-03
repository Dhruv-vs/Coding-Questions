
class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int count(int stair,int n, vector<int>&dp){
        if(stair==n) return 1;
        if(stair>n) return 0;
        
        if(dp[stair]!=-1) return dp[stair];
        dp[stair] = count(stair+1,n,dp)+count(stair+2,n,dp)+count(stair+3,n,dp);
        return dp[stair];
    }
    int countWays(int n) {
        // recursive method
        
        // if(n<3) return n;
        // if(n==3) return 4;
        // return countWays(n-1)+countWays(n-2)+countWays(n-3);
        
        // Dp method
        // 1. Top - down approach(recursive method)
        vector<int>dp(n+3,-1);
        // return count(0,n,dp);
        
        // 2. Bottom - up (with loops only)
        dp[n] = 1;
        dp[n+1] = 0;
        dp[n+2] = 0;
        
        for(int i=n-1;i>=0;i--){
            dp[i] = dp[i+1]+dp[i+2]+dp[i+3];
        }
        return dp[0];
    }
};
