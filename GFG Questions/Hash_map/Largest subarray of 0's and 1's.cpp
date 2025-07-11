class Solution {
  public:
    int maxLen(vector<int> &arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) arr[i] = -1;
        }
        int len = 0;
        unordered_map<int,int>m;
        int sum = 0;
        
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(sum ==0) len = i+1;
            else if(m.count(sum)) len = max(len,i-m[sum]);
            else m[sum] = i;
        }
        return len;
    }
};
