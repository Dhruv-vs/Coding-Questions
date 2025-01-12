class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
       int start=arr[0],end=0,mid;
       if(k>arr.size()) return -1;
       
       for(int i=0;i<arr.size();i++){
           end+=arr[i];
           if(start<arr[i]) start=arr[i]; // start-> from max element of aray
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
               end=mid-1;
               ans=mid;
           }
           else 
           start=mid+1;
       }
       return ans;
    }
};
