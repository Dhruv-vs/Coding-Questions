class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        int count=0;
        int i=0,j=arr.size()-1;
        while(i<j){
            if(arr[i]+arr[j]<target){
                count+=j-i; //return count of pairs from i to j including i in all pairs
                i++;
            }
            else j--;
        }
        return count;
    }
};
