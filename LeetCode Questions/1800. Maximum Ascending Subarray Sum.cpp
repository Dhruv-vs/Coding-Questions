class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]>nums[i-1]){
                sum+=nums[i];
                ans = max(sum,ans);
            }
            else{
                sum=0;
                sum+=nums[i];
                ans = max(sum,ans);
            }
        }
        return ans;
    }
};
