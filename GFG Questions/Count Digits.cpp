class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int count=0;
        int copy=n; //storing value of n
        while(n){
            int d = n%10; //getting last digit
            if( d!=0 && copy%d==0) count++; //first checks for d!=0
            n/=10;
        }
        return count;
    }
};
