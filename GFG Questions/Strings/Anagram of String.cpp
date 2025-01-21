// minimum deletion made to make string anagram
int remAnagram(string s1, string s2) {
    int count[26] ={0};
    int index;
    for(int i=0;i<s1.size();i++){
        index = s1[i]-'a';
        count[index]++;
    }
    for(int i=0;i<s2.size();i++){
        index = s2[i]-'a';
        count[index]--;
    }
    int ans =0;
    for(int i=0;i<26;i++){
        ans += abs(count[i]);
    }
    return ans;
}
