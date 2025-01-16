class Solution {

  public:
  bool Search(vector<int>& b,int n){
      int start=0,end=b.size()-1,mid;
      if(n<b[start] || n>b[end]) return false;
      while(start<=end){
          mid = (start+end)/2;
          if(b[mid]==n) return true;
          else if(b[mid]<n) start=mid+1;
          else end=mid-1;
      }
      return false;
  }
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        sort(b.begin(),b.end());
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            if(!Search(b,a[i])) ans.push_back(a[i]);
        }
        return ans;
    }
};
