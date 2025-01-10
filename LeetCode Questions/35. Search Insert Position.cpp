class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end= nums.size()-1,mid,index=0;
        while(start<=end){
            mid = (start+end)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                start=mid+1;
                index = mid+1; // assuming to present on next index
            }
            else{
            end = mid-1;
            index = mid; 
            }
        }
        return index;
    }
};
