class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        int ans = 1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]<1) continue;
            
            if(arr[i]==ans) ans++;
        }
        return ans;
    }
};
