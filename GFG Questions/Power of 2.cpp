class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        // code here
        bool ans = 1;
        if(n==1 || n==2) return ans;
        while(n>2){
            if(n%2!=0){
                ans = 0;
                return ans;
            }
            n/=2;
        }
        return ans;
    }
};
