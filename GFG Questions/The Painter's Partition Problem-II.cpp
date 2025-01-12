// User function template for C++

class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
      // Same as book allocation problem
        int start=arr[0],end=0,mid;
        for(int i=0;i<arr.size();i++){
            end+=arr[i];
            if(arr[i]>start) start=arr[i]; //storing max value
        }
        
        int ans=-1;
        while(start<=end){
            mid = (start+end)/2;
            int sum=0,count=1;
            for(int i=0;i<arr.size();i++){
                sum+=arr[i];
                if(sum>mid){
                    count++;
                    sum=arr[i];
                }
            }
            if(count<=k){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};
