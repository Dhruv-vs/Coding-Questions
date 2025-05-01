class Solution {
  public:
    int findMaxDiff(vector<int> &arr) {
        int n = arr.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;
        
        // filling right smaller
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                right[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()]=0;
            st.pop();
        }
        
        // filling left smaller
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                left[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()]=0;
            st.pop();
        }
        
        int ans =0;
        for(int i=0;i<n;i++){
            ans = max(ans , (abs(left[i] - right[i])));
        }
        return ans;
    }
};
