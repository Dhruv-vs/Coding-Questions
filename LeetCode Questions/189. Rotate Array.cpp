class Solution {
public:
// int rotatearray(vector<int>& nums,int n){ // pass the nums by reference
//     int temp = nums[n-1];
//     for(int i=n-1;i>0;i--){
//         nums[i] = nums[i-1];
//     }
//     nums[0] = temp;
//     return 0;
// }
    void rotate(vector<int>& nums, int k) {
        // for(int i=0;i<k;i++){
        //     int n = nums.size();
        //     rotatearray(nums,n);
        // }
        // Time Limit Exceeded come in above 37/38 passed

        //optimised
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(), nums.end()); // reverse whole
        reverse(nums.begin(), nums.begin() + k); //reverse first 0 to k-1 
        reverse(nums.begin() + k, nums.end()); //reverse k to n-1
    }
};
