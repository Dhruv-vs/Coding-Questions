class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int start=0,end=arr.size()-1,ans=0;
        while(start<end){
            // calculating water
            int water = (end-start)*(min(arr[start],arr[end]));
            ans = max(ans, water);
            if(arr[start]<arr[end]) start++; //increase the smallest side to get max value
            else end--;
        }
        return ans;
    }
};
