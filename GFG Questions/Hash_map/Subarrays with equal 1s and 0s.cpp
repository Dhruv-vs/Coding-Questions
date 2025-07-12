
class Solution {
  public:
    // Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n) {
        for(int i=0;i<n;i++){
            if(arr[i]==0) arr[i] = -1;
        }
       long long int count = 0;
       unordered_map<int,int>m;
       int sum = 0;
       
       for(int i=0;i<n;i++){
           sum += arr[i];
           
           if(sum == 0) count++;
           // the count is increase the no. of times it comes
           if(m.count(sum)) count+=m[sum];
           // always increase frequency
           m[sum]++;
       }
        return count;
    }
};
