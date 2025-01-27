class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int count[256] = {0}; //taking all ascii chars
        int first = 0, second = 0, total = 0;

        while (second < s.size()){
            count[s[second]]++; // increment current char
            while (count[s[second]] > 1){
                count[s[first]]--;
                first++;
            }
            total = max(total, second - first + 1);
            second++;
        }

        return total;
    }
};
