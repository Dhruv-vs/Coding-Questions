class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == "+" || arr[i] == "-" || arr[i] == "*" || arr[i] == "/" || arr[i] == "^") {
                int first = st.top(); st.pop();   // right 
                int second = st.top(); st.pop();  // left
                
                int result = 0;
                if (arr[i] == "+") result = second + first;
                else if (arr[i] == "-") result = second - first;
                else if (arr[i] == "*") result = second * first;
                else if (arr[i] == "/") result = (int)floor((double)second / (double)first); // floor works only with double, float values
                else if (arr[i] == "^") result = (int)pow(second, first);
                
                st.push(result);
            } 
            else {
                st.push(stoi(arr[i]));
            }
        }
        return st.top();
    }
};
