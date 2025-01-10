class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        int mid,ans=arr[low]; // initiallizing ans
        if(arr[low]<arr[high]) return arr[low];
        while(low<=high){
            mid = low+(high-low)/2;
            if(arr[mid]<arr[0]){
                ans = arr[mid];
                high=mid-1;
            }
            else{ // for->arr[mid]>=arr[0];
                low=mid+1;
            }
        }
        return ans;
    }
};
