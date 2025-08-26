class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        int start=0;
        for(int i=0;i<s2.size();i++){
            if(start==s1.size()) return 1;
            if(s1[start]==s2[i]) start++;
        }
        if(start==s1.size()) return 1;
        return 0;
    }
};
