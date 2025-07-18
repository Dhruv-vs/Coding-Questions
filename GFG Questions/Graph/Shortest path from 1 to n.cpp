// User function Template for C++

class Solution {
  public:
    int minimumStep(int n) {
        int countEdge = 0;
        while(n>=3){
            countEdge += n%3;
            n/=3;
            countEdge++;
        }
        if(n==2) countEdge++; // special case
        return countEdge;
    }
};
