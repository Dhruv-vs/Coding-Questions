class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
       int ans = -1;
       // map of int, bool(tells the presence)
       unordered_map<int,bool>m;
       for(int i=arr.size()-1;i>=0;i--){
           // if come previously
           if(m.count(arr[i])) ans = i+1;
           // if not come
           else m[arr[i]] = 1;
       }
       return ans;
    }
};
