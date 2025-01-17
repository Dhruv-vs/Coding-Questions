class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        int start=0,end=arr.size()-1,mid;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return arr[mid];
            else if(arr[mid]>arr[mid-1]) start=mid+1;
            else end=mid-1;
        }
        return -1;
    }
};
