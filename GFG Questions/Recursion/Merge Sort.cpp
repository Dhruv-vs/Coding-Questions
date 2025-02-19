class Solution {
  public:
  void merge_array(vector<int>& arr,int l,int mid,int r){
      int size = r-l+1;
      vector<int>ans(size);
      
      int first = l , second = mid+1,index=0;
      while(first<=mid && second<=r){
          if(arr[first]<=arr[second]){
              ans[index]=arr[first];
              index++,first++;
          }
          else{ 
          ans[index] = arr[second];
          index++,second++;
          }
      }
      while(first<=mid) ans[index++] = arr[first++];
      while(second<=r) ans[index++] = arr[second++];
      
      for(int i=0;i<size;i++){
            arr[l+i]=ans[i]; 
        }
  }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l>=r) return;
        
        int mid = l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge_array(arr,l,mid,r);
    }
};
