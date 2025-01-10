//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int start=0,end = N-1,mid,index=0;
        while(start<=end){
            mid = end + (start-end)/2;
            if(Arr[mid]==k) return mid;
            else if(Arr[mid]<k){
                start = mid+1;
                index = mid+1;
            }
            else{
                end = mid-1;
                index = mid;
            }
        }
        return index;
    }
};
