class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int len = 0;
        unordered_map<int,int>m;
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+= arr[i];
            
            if(sum==0) len = i+1;
            // exist in map
            else if(m.count(sum)) len = max(len,i-m[sum]);
            // not exist in map ie add the key and value
            else m[sum] = i;
        }
        return len;
    }
};
