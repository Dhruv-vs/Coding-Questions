class Solution {
  public:
  void divide(int N,int &count){
      while(N>1){
          count++;
          N/=2;
      }
  }
    int heapHeight(int N, int arr[]) {
       if(N==1) return 1;
       int count = 0;
       divide(N,count);
       return count;
    }
};
