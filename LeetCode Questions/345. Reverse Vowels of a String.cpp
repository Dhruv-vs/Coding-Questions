class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if ((s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I') &&
                (s[j]=='a'||s[j]=='e'||s[j]=='o'||s[j]=='u'||s[j]=='i'||s[j]=='A'||s[j]=='E'||s[j]=='O'||s[j]=='U'||s[j]=='I')) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if ((s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I') &&
                     !(s[j]=='a'||s[j]=='e'||s[j]=='o'||s[j]=='u'||s[j]=='i'||s[j]=='A'||s[j]=='E'||s[j]=='O'||s[j]=='U'||s[j]=='I')) {
                j--;
            }
            else if (!(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I') &&
                     (s[j]=='a'||s[j]=='e'||s[j]=='o'||s[j]=='u'||s[j]=='i'||s[j]=='A'||s[j]=='E'||s[j]=='O'||s[j]=='U'||s[j]=='I')) {
                i++;
            }
            else {
                i++;
                j--;
            }
        }
        return s;
    }
};
