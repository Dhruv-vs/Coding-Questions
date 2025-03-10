class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int>count(n+1,0);
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        int missing=-1,repeating=-1;
        for(int i=1;i<=n;i++){
            if(count[i]==0) missing = i;
            if(count[i]==2) repeating = i;
        }
        return {repeating,missing};
    }
};
