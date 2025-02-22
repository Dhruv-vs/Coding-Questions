class Solution {
  public:
  
  void merge_array(vector<int> &arr,int l,int mid,int r,int &count){
      int point1=l;
      int point2=mid+1;
      vector<int> temp;
      
    // Count inversions and merge sorted subarrays
        while (point1 <= mid && point2 <= r) {
            if (arr[point1] <= arr[point2]) {
                temp.push_back(arr[point1++]);
            } else {
                temp.push_back(arr[point2++]);
                count += (mid - point1 + 1); // Count inversions
            }
        }
        
        // Copy remaining elements from left part
        while (point1 <= mid) temp.push_back(arr[point1++]);
        // Copy remaining elements from right part
        while (point2 <= r) temp.push_back(arr[point2++]);

        // Copy back sorted elements to original array
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
  }
  
    void merge_sort(vector<int> &arr,int l,int r,int &count){
        if(l>=r) return;
        
        int mid = l+(r-l)/2;
        merge_sort(arr,l,mid,count);
        merge_sort(arr,mid+1,r,count);
        
        merge_array(arr,l,mid,r,count);
    }
    int inversionCount(vector<int> &arr) {
        //brute force
        // int count =0;
        // for(int i=0;i<arr.size()-1;i++){
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[i]>arr[j] && i<j) count++;
        //     }
        // }
        // return count;
        // the above solution gives TLE because TC- O(N*N)
        
        // Better
        int count=0;
        
        merge_sort(arr,0,arr.size()-1,count);
        return count;
        
    }
};
