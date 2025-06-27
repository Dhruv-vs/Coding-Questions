class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // int i=0;
        // while(i<a.size()){
        //     int count =0;
        //     for(int j=0;j<b.size();j++){
        //       if(b[j]<=a[i]) count++; 
        //     }
        //     a[i] = count;
        //     i++;
        // }
        // return a;
        
        // the above gives tle
        
        // solving using binary search
        int i = 0;
        sort(b.begin(),b.end());
        while(i<a.size()){
            int start = 0,end = b.size()-1,mid;
            int ans = -1;
            while(start<=end){
            mid = start+(end-start)/2;
            
            if(b[mid]<=a[i]){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        a[i] = ans+1; // if ans = -1 means no smaller or equal so make a[i] = 0
        i++;
    }
    return a;
    }
};
