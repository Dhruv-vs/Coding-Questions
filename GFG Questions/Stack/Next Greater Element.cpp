class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
    int n = arr.size();
    stack<int>st;
    vector<int>ans(n,-1);
    int i=0;
    while(i<n){
       if(st.size()==0){
           st.push(i);
       } 
       else{
           if(arr[st.top()]>=arr[i]) st.push(i);
           else{
               while(st.size() && arr[st.top()]<arr[i]){
               ans[st.top()] = arr[i];
               st.pop();
               }
           }
           st.push(i);
       }
       i++;
    }
    return ans;
    
    }
};
