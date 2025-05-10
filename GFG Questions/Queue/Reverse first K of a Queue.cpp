class Solution {
  public:
    queue<int> reverseFirstK(queue<int>& q, int k) {
        if (k > q.size()) { // imp point if k>q.size() return q;
            return q;
        }
        int diff = q.size()-k;
        
        stack<int>st;
        while(k--){
            st.push(q.front());  // first put in stack
            q.pop();
        }
        while(st.size()){
        q.push(st.top());  // then push in q from stack in reverse order at back
        st.pop();
        }
        
        while(diff--){
            // now remove first diff elements left and push at back
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
