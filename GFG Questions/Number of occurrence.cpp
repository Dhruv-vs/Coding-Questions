class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        // first occurance
        int start=0;
        int end=n-1;
        int mid;
        int first=-1,last1=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        // last occurance
        int start1=0;
        int end1=n-1;
        int mid1;
        while(start1<=end1){
            mid1=start1+(end1-start1)/2;
            if(arr[mid1]==target){
                last1=mid1;
                start1=mid1+1;
            }
            else if(arr[mid1]<target){
                start1=mid1+1;
            }
            else
            end1=mid1-1;
        }
        if(first==-1 && last1==-1) return 0; //if not present
        return last1-first+1;
    }
};
