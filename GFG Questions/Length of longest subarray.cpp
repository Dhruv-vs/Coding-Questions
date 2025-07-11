class Solution {
    /* Function that returns the longest subarray
       of non-negative integers */
  public:
    int longestSubarry(vector<int>& arr) {
        int first = 0,end = 0;
        int maxLen = 0;
        while(end<arr.size()){
            if(arr[end]>=0) end++;
            else{
                int len = end-first;
                maxLen = max(maxLen,len);
                while(arr[end]<0){
                    end++;
                }
                first = end;
            }
        }
        maxLen = max(maxLen,end-first);
        return maxLen;
    }
};
