class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        int count[26] = {0};
        int index;
        // track count of s1
        for(int i=0;i<s1.size();i++){
            index = s1[i]-'a';
            count[index]++;
        }
        // track count of s2
        for(int i=0;i<s2.size();i++){
            index = s2[i]-'a';
            count[index]++;
        }
        for(int i=0;i<26;i++){
            if(count[i]%2!=0) return false;
        }
        return true;
    }
};
