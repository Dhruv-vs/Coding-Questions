class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]) arr[i]=arr[i+1];
            else arr[i] = -1;
        }
        arr[n-1] = -1;
    }
};
