class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        if(s1.size()!=s2.size()) return true;
        for(int i=0;i<s1.size()-1;i++){
            for(int j=i+1;j<s1.size();j++){
                swap(s1[i],s1[j]);
                if(s1==s2) return true;
                else swap(s1[i],s1[j]);
            }
        }
        return false;
    }
};
