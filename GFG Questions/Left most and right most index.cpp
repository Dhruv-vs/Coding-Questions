class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long long start=0,end=v.size()-1,leftIndex = -1,rightIndex = -1,mid;
        //leftmost part
        while(start<=end){
            mid = (start+end)/2;
            if(v[mid]==x){
                leftIndex = mid;
                end = mid - 1;
            }
            else if(v[mid]<x) start=mid + 1;
            else end = mid -1;
        }
        //rightmost part
        start =0 , end = v.size()-1;
        while(start<=end){
            mid = (start+end)/2;
            if(v[mid]==x){
                rightIndex = mid;
                start = mid + 1;
            }
            else if(v[mid]<x) start=mid + 1;
            else end = mid -1;
        }
        return {leftIndex,rightIndex};
    }
};
