class Solution {
  public:
    string removeleadingzero(string s){
    int i = 0;
    while (i < s.length() && s[i] == '0') {
        i++; // Skip over leading zeros
    }
    // If all characters were zeros, return "0"
    if (i == s.length()) {
        return "0";
    }
    // Otherwise, return the string starting from the first non-zero character
    return s.substr(i); 
    }
    string findSum(string &s1, string &s2) {
        s1 = removeleadingzero(s1);
        s2 = removeleadingzero(s2);
        int i = s1.size()-1;
        int j = s2.size()-1;
        int carry = 0;
        string ans = "";
        
        while(i>=0 || j>=0 || carry>0){
            int sum = carry; //making sum to do operation in string;
            if(i>=0){
                sum+= s1[i]-'0'; //making it a int
                i--;
            }
            if(j>=0){
                sum+= s2[j]-'0';
                j--;
            }
            carry = sum/10; //to calculate carry
            ans = char(sum%10+'0') + ans; //converting it to char 
        }
        return ans;
    }
};
