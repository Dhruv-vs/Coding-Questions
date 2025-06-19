class Solution {
  public:
    string caseSort(string& s) {
        vector<char>st;
        vector<char>UC;
        vector<char>LC;
        bool upper = 0;
        bool lower = 0;
        string ans = "";
        for(int i=0;i<s.size();i++){
            st.push_back(s[i]);
            if(s[i]>='A' && s[i]<='Z'){
              UC.push_back(s[i]);  
              upper = 1;  
            } 
            else {
                lower = 1;
                LC.push_back(s[i]);
            }
        }
        
        // if the string is whole lower or upper case then return direct sorted
        if((upper == 0 && lower == 1) || (upper == 1 && lower == 0)){
            sort(st.begin(),st.end());
            // converting back to string
            return string(st.begin(),st.end());
        }
        // if mix is present
        else {
            sort(UC.begin(),UC.end());
            sort(LC.begin(),LC.end());
            int st1 = 0,st2=0;
            for(int i=0;i<s.size();i++){
                if(s[i]>='A' && s[i]<='Z'){
                    ans += UC[st1];
                    st1++;
                }
                else{
                    ans+= LC[st2];
                    st2++;
                }
            }
        }
        return ans;
    }
};
