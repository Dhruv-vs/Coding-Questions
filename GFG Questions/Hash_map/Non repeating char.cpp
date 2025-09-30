
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        unordered_map<char,int>m;
        
        for (char num : s) {
            m[num]++;
            }
        for (char ch : s) {
            if (m[ch] == 1) return ch;
        }
        return '$';
    }
};
