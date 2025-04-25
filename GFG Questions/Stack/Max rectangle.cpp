class Solution {
  public:
  int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        vector<int>right(n);
        vector<int>left(n);
        stack<int>st;
        
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()]=n;
            st.pop();
        }
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()]=-1;
            st.pop();
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,arr[i]*(right[i]-left[i]-1));
        }
        return ans;
    }
    int maxArea(vector<vector<int>> &mat) {
        int ans =0;
        int row = mat.size();
        int col = mat[0].size();
        vector<int> height(col,0);
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0) height[j]=0;
                else height[j]+=1;
            }
            ans = max(ans,getMaxArea(height));
        }
        return ans;
    }
};
