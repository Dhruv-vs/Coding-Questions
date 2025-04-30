class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;

        // first fill right vector(smallest on right side)
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()]=n;
            st.pop();
        }

        // first fill left vector(smallest on left side)
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                  left[st.top()] = i;
                  st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()] = -1;
            st.pop();
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,heights[i]*(right[i]-left[i]-1));
        }
        return ans;
    }
};
