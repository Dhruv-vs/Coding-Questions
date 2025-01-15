class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        vector<int>a1;
        vector<int>a2;
        for(int i=0;i<arr1.size();i++){
            if(i==0 || arr1[i]!=arr1[i-1]) a1.push_back(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            if(i==0 || arr2[i]!=arr2[i-1]) a2.push_back(arr2[i]);
        }
        vector<int>ans;
        int start1=0,start2=0;
        while(start1<a1.size() && start2<a2.size()){
            if(a1[start1]==a2[start2]) {
                ans.push_back(a1[start1]);
                start1++,start2++;
            }
            else if(a1[start1]<a2[start2]) start1++;
            else start2++;
        }
        return ans;
    }
};
