class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int start=0,end=n-1,mid,ans=-1;
        while(start<=end){
            mid= start + (end - start)/2;
            if(arr[mid]==k){
                ans = mid;
                end = mid-1; // we have to give first occurance
            }
            else if(arr[mid]<k){
                start = mid+1;
            }
            else
            end = mid-1;
        }
       return ans;
    }
};
