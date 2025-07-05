class Solution {
  public:
   void heapify(vector<int>&arr,int index,int size){
       int largest = index;
       int left = 2*index + 1;
       int right = 2*index + 2;
       
       if(left<size && arr[left]>arr[largest]) largest = left;
       if(right<size && arr[right]>arr[largest]) largest = right;
       
       if(largest!=index){
           swap(arr[largest],arr[index]);
           heapify(arr,largest,size);
       }
   }
    void heapSort(vector<int>& arr) {
        // creating a heap of arr
        for(int i=arr.size()/2-1;i>=0;i--){
            heapify(arr,i,arr.size());
        }
        
       for(int i=arr.size()-1;i>=0;i--){
           swap(arr[0],arr[i]);
           heapify(arr,0,i);
       } 
    }
};
