class Solution {
  public:
  int calculation(int i,int a,int b,int c){
      int ans =0;
      if(a==0 && b==0 && c==0) return ans;
      if(a==0 && b==0) return ans+c;
      ans = a*(i*i) + b*i + c;
      return ans;
  }
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int cal = calculation(arr[i],A,B,C);
            ans.push_back(cal);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
