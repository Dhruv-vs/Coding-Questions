class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int start=0,end=a.size()-1,mid;
        while(start<=end){
            mid=start+ (end-start)/2;
            // Edge case for first element
            if (mid == 0) {
                if(a[mid]>=a[mid + 1]) return a[mid];
                start=mid+1;
            }
            // Edge case for last element
            else if(mid==a.size()-1) {
                if (a[mid]>=a[mid-1]) return a[mid];
                end=mid-1;
            }
            else{
            if(a[mid]>=a[mid-1] && a[mid]>=a[mid+1]) return a[mid];
            else if(a[mid]>=a[mid-1]) start=mid+1;
            else end=mid-1;
          }
        }
        return -1;
    }
};
