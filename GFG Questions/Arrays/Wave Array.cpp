class Solution {
  public:
    // arr: input array
    // Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr) {
        int start =0;
        while(start<arr.size()-1){
            swap(arr[start],arr[start+1]);
            start+=2;
        }
    }
};
