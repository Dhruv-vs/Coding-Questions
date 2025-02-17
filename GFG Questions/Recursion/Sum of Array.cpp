class Solution {
  public:
  int Sum(int* arr,int sum,int n){
      if(n==0) return sum;
      
      sum+=arr[0];
      return Sum(arr+1,sum,n-1); // return is written as int is there
  }
    int arraySum(vector<int>& arr) {
        int sum =0;
        int n = arr.size();
        //arr.data() returns a pointer to the first element of the vector.
       return Sum(arr.data(),sum,n); 
    }
};
