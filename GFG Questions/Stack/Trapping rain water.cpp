class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int maxheight=0,index=0;
        for(int i=0;i<n;i++){
            if(arr[i]>maxheight){
                maxheight = arr[i];
                index = i;
            }
        }
        int leftmax=0,rightmax=0,water=0;
        for(int i=0;i<index;i++){
            if(leftmax>arr[i]) water+=leftmax-arr[i];
            else leftmax=arr[i];
        }
        for(int i=n-1;i>index;i--){
            if(rightmax>arr[i]) water+=rightmax-arr[i];
            else rightmax=arr[i];
        }
        return water;
    }
};
