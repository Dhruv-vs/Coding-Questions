class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {
      // using binary search in log(n)
        int start=0,end=arr.size()-1,mid,ans=-1;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==k) return mid;
            else if(arr[mid]<k){
                ans = mid;
                start=mid+1;
            }
            else end=mid-1;
        }
        return ans;
    }
};
