class Solution {
  public:
    int maxValue(vector<int>& nums) {
        // dp - bottom up approach
        // int n = nums.size();
        // if(n==1) return nums[0];
        // vector<int>dp1(n+2,-1);
        // vector<int>dp2(n+2,-1);

        // dp1[n-1]=dp1[n] = 0;
        // dp2[n]=dp2[n+1] = 0;

        // for(int i=n-2;i>=0;i--) dp1[i] = max((nums[i]+dp1[i+2]),dp1[i+1]);

        // for(int i=n-1;i>0;i--) dp2[i] = max((nums[i]+dp2[i+2]),dp2[i+1]);

        // return max(dp1[0],dp2[1]);
        
        // Space optimised O(1);
        int n = nums.size();
        if(n==1) return nums[0];
        int first = 0;
        int second = 0;
        int third1;
        int third2;
        
        // Taking first and skip last
        for(int i=n-2;i>=0;i--){ 
            third1 = max((nums[i]+second),first);
            second = first;
            first = third1;
        }
        first=second= 0;
        // Taking last and skip first
        for(int i=n-1;i>0;i--){
            third2 = max((nums[i]+second),first);
            second = first;
            first = third2;
        }
        return max(third1,third2);
    }
};
