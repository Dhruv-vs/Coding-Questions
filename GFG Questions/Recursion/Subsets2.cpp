class Solution {
  public:
  void ps(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,int i,int n){
      if(i==n){
          ans.push_back(temp);
          return;
      }
      temp.push_back(arr[i]);
      ps(arr,ans,temp,i+1,n);
      temp.pop_back();
      
      int ind = i+1;
      while(ind<n && arr[ind]==arr[ind-1]) ind++;
      ps(arr,ans,temp,ind,n);
  }
    vector<vector<int>> findSubsets(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int> temp;
        int n = arr.size();
        ps(arr,ans,temp,0,n);
        return ans;
        
    }
};
