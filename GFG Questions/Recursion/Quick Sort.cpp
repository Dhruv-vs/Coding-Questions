class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
       if(low>=high) return;
       
       int index = partition(arr,low,high);
       quickSort(arr,low,index-1);
       quickSort(arr,index+1,high);
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int first = low;
        int second = low;
        while(second<=high){
            if(arr[second]<=arr[high]) swap(arr[first++],arr[second++]);
            else second++;
        }
        return first-1;
    }
};
