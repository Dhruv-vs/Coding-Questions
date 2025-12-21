class Solution {
  public:
  int countRange(vector<int>&arr,int l,int r,int target){
      int n = arr.size();
        // first occurance
        int start=l;
        int end=r;
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
        int start1=l;
        int end1=r;
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
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int num = queries[i][2];
            ans.push_back(countRange(arr,l,r,num));
        }
        return ans;
    }
};
