class Solution {
  public:
    string removeKdigits(string s, int k) {
        stack<int>st;
        int i=0,num;
        while(i<s.size()){
            num = s[i]-'0';
            while(st.size() && st.top()>num && k){
                st.pop();
                k--;
            }
            st.push(num);
            i++;
        }
        while(k--){
            st.pop();
        }
        string ans;
        char c;
        while(st.size()){
            c = st.top()+'0';
            st.pop();
            ans+=c;
        }
        i = ans.size()-1;
        while(i>=0 && ans[i]=='0'){
            ans.pop_back();
            i--;
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==0) return "0";
        else return ans;
    }
};
