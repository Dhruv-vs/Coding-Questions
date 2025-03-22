class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){st.push(s[i]);
            }
            else{
                if(st.empty()) return 0;
                // get top element
                char top=st.top();
                if((top =='(' && s[i]==')')||
                    (top =='{' && s[i]=='}')||
                    (top =='[' && s[i]==']')){
                        st.pop();
                    }
                else{
                    return 0;
                }
            }
            i++;
        }
        return st.empty();
    }
};
