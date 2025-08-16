class Solution {
  public:
  static bool comp(string &a,string &b){
      return a+b>b+a;
  }
    string findLargest(vector<int> &arr) {
        vector<string>a;
        for(int i=0;i<arr.size();i++){
            a.push_back(to_string(arr[i]));
        }
        
        sort(a.begin(),a.end(),comp);
        
        if(a[0]=="0") return "0";
        string ans;
        for(int i=0;i<a.size();i++){
            ans+=a[i];
        }
        return ans;
    }
};
