class Solution {
  public:
    // Function to find the length of longest increasing subarray
    int lenOfLongIncSubArr(vector<int> &arr) {
        if(arr.size()==1) return 1;
        int first = 0,end = 1;
        int maxLen = 0;
        while(end<arr.size()){
            if(arr[end]>arr[end-1]) end++;
            else {
                int len = end-first;
                maxLen = max(maxLen,len);
                first = end;
                end++;
            }
        }
        maxLen = max(maxLen,end-first);
        return maxLen;
    }
};
