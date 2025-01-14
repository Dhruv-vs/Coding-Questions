class Solution {
  public:
    int floorSqrt(int n) {
        int start=1,end=n,mid;
        int ans =0;
        while(start<=end){
            mid=(start+end)/2;
            if((mid*mid)==n) return mid;
            else if(mid*mid>n) end=mid-1;
            else{
                start=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};
