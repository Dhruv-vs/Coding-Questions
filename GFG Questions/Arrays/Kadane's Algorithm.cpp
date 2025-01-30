class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int maxi = INT_MIN;
        int prefix =0;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            maxi = max(prefix,maxi);
            if(prefix<0) prefix=0; // if prefix sum <0 then make prefix negative
            // this is called kadanes ie make 0 if negative because we want max value
        }
        return maxi;
    }
};
