class Solution {
  public:
    int findMagicalNumber(vector<int>& arr) {
        int start=0,end=arr.size()-1,mid;
        int ans=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==mid){ 
                ans = arr[mid];
                end=mid-1;
            }
            else if(arr[mid]<mid) start = mid+1;
            else end=mid-1;
        }
        return ans;
    }
};
