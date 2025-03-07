class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxSum = 0, currentSum = 0;

        // calculate sum of first 'k' elements
        for(int i=0;i<k;i++){
            currentSum+=nums[i];
        }
        maxSum = currentSum;

        //slide the window
        for(int i=k;i<n;i++){
            currentSum += nums[i]-nums[i-k];
            maxSum = max(maxSum,currentSum);
        }

        return maxSum/k;
    }
};
