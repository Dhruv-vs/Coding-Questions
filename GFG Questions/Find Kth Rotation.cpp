// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {  
      // finding largest element and adding +1 to it and doing % with size n
        int n = arr.size();
        int start=0,end = n-1,mid,ans = n-1;
        if(arr[start]<arr[end]) return (ans+1)%n;
        while(start<=end){
            mid = end + (start-end)/2;
            if(arr[mid]>=arr[0]){
                ans = mid;
                start=mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return (ans+1)%n;
    }
};
