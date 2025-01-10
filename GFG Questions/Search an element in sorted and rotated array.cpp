int Search(vector<int> arr, int K) {
    int n= arr.size();
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid = end+(start-end)/2;
        if(arr[mid]==K) return mid;
        //left side check
        else if(arr[mid]>=arr[0]){
            if(arr[start]<=K && arr[mid]>=K) end=mid-1;
            else start=mid+1;
        }
        //right side check
        else{
            if(arr[mid]<=K && arr[end]>=K) start=mid+1;
            else end=mid-1;
        }
    }
        return ans;
    }
