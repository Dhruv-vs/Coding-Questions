class Solution {
  public:
    int countDivisibles(int A, int B, int M) {
        // int count=0;
        // for(int i=A;i<=B;i++){
        //     if(i%M==0) count++;
        // }
        // return count;
        
        // mathematical equation
      // B/M count total no. divisible by B
      // (A-1)/M deletes the no. that are less than A and are divisible by M
        return (B/M)-((A-1)/M);
    }
};
