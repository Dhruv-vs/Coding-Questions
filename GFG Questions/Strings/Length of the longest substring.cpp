class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code to print no. of unique elements not longest unique substring
        // int ans[26] = {0};
        // for(int i=0;i<s.size();i++){
        //     int index = s[i]-'a';
        //     ans[index]++;
        // }
        // int count=0;
        // for(int i=0;i<26;i++){
        //     if(ans[i]>0) count++;
        // }
        // return count;
        
        
        // code for unique longest substring
        int first =0,second = 1,total = 1;
        int count[26] = {0};
        // update first char to count
        count[s[0]-'a']++;
        
        while(second<s.size()){
            // if s[second] is previously seen
            while(count[s[second]-'a']){
                count[s[first]-'a'] = 0;
                first++;
            }
            // if s[second] is not seen previously
            count[s[second]-'a']=1;
            total = max(total,second-first+1);
            second++;
        }
        return total;
    }
};
