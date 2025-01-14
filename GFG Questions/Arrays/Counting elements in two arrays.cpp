
class Solution {
  public:
    int Count(vector<int>& b,int k){
        if (b.empty()) return 0;
        int start=0,end=b.size()-1,mid;
        int ans=0;
        //edge cases
        if(k>=b[end]) return b.size();
        if(k<b[start]) return 0;
      
        while(start<=end){
            mid = start +(end-start)/2;
            if(b[mid]<=k){
                ans=mid+1;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return ans;
    }
    vector<int> countEleLessThanOrEqual(vector<int>& a, vector<int>& b) {
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            a[i] = Count(b,a[i]);
        }
        return a;
    }
};
