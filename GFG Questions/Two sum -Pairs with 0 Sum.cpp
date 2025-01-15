class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       vector<vector<int>>ans;
       int start=0,end=arr.size()-1;
       while(start<end){
           if(arr[start]+arr[end]==0){
           ans.push_back({arr[start],arr[end]});
           // skip duplicates
           while(start<end && arr[start]==arr[start+1]) start++;
           while(end>start && arr[end]==arr[end-1]) end--;
           //increase both start and end for next
           start++,end--;
           }
           else if(arr[start]+arr[end]<0) start++;
           else end--;
       }
       return ans;
    }
};
