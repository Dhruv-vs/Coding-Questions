class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
       unordered_map<int,int>m;
       int distinct_count = 0;
       vector<int>ans;
       
       for(int i=0;i<k;i++){
           m[arr[i]]++; // adds the number in map and increments the value
           if(m[arr[i]]==1) distinct_count++;
       }
       ans.push_back(distinct_count);
       
       for(int i=k;i<arr.size();i++){
           // remove the (i-k) number from the window or map 
           m[arr[i-k]]--;
           if(m[arr[i-k]]==0) distinct_count--;
           
           // add the coming number
           m[arr[i]]++;
           if(m[arr[i]]==1) distinct_count++;
           
           ans.push_back(distinct_count);
       }
       return ans;
    }
};
