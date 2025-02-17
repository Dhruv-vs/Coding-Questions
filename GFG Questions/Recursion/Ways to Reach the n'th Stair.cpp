class Solution {
  public:
    // Function to count number of ways to reach the nth stair.
    int countWays(int n) {
    //   if(n<3) return n;
    //   return countWays(n-1)+countWays(n-2);
    
    // the above code will give tle 
    
    // one more way
    int prev1 = 1 , prev2 = 2 , current;
    if(n<3) return n;
    for(int i=3;i<=n;i++){
        current = prev1+prev2;
        prev1=prev2;
        prev2 = current;
    }
    return prev2;
    }
};
