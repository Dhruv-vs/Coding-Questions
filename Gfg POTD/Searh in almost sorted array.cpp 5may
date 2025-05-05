class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        
        int start=0,end = arr.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(arr[mid]==target) return mid;
            if(arr[mid-1]==target) return mid-1;
            if(arr[mid+1]==target) return mid+1;
            
            else if(arr[mid]<target) start=mid+2;
            else end = mid-2;
        }
        return -1;
    }
};
