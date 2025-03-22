class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return 0;
                char top = st.top();
                if ((top == '(' && s[i] == ')') ||
                    (top == '{' && s[i] == '}') ||
                    (top == '[' && s[i] == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
            i++;
        }
        return st.empty();
    }
};
