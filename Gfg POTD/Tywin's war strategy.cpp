class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        int n =arr.size();
        int cZero = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
              arr[i] = 0;
              cZero++;
            }
        }
        int check = 0;
        if(n%2==0) check = n/2;
        else check = (n/2)+1;
        if(cZero>=check) return 0;
        
        for(int i=0;i<n;i++){
            arr[i] = arr[i]%k;
        }
        sort(arr.begin(),arr.end());
        
        int add = 0;
        for(int i=n-1;i>=0;i--){
            if(cZero>=check) return add;
            
                else if(arr[i]!=0){
                add += k-arr[i];
                cZero++;
            }
        }
        return 0;
    }
};
