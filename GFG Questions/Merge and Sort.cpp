// Write your code here

class Solution {
  public:
    vector<int> mergeNsort(vector<int>& a, vector<int>& b) {
        // int point1=0,point2=0;
        // vector<int>ans;
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // while(point1<a.size() && point2<b.size()){
        //     if(a[point1]<b[point2]){
        //         ans.push_back(a[point1++]);
        //     }
        //     else if(a[point1]>b[point2]){
        //     ans.push_back(b[point2++]);
        //     }
        //     else{
        //     ans.push_back(a[point1]);
        //     point1++,point2++;
        //     }
        // }
        // while(point1<a.size()){
        //     ans.push_back(a[point1++]);
        // }
        // while(point2<b.size()){
        //     ans.push_back(b[point2++]);
        // }
        // // to remove the duplicates
        // ans.erase(unique(ans.begin(), ans.end()), ans.end());
        // return ans;
        
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            ans.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            ans.push_back(b[i]);
        }
        sort(ans.begin(),ans.end());
        
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
