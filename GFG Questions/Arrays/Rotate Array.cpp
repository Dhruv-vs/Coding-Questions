// Rotate array anticlockwise optimised approach 
class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d%n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end()-d);
        reverse(arr.end()-d,arr.end());
    }
};
