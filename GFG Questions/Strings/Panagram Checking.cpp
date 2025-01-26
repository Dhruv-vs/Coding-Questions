class Solution {
  public:
    // Function to check if a string is Pangram or not.
    bool checkPangram(string& s) {
        if(s.size()<26) return false;
        int count[26] = {0};
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                count[s[i]-'a']=1;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i]+32; // changing uppercase in lower case
                count[s[i]-'a']=1;
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]==0) return false;
        }
        return true;
    }
};
