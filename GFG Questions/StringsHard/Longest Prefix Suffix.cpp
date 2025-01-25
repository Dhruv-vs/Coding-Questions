
// User function template for C++

class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        int LPS[s.size()+1];
        char str[s.size()+1];
        
        for(int i=0;i<s.size();i++){
            str[i+1] = s[i];
            LPS[i]=0;
        }
        LPS[s.size()]=0; //last update to 0
        
        int first=0,second=2;
        while(second<=s.size()){
            if(str[first+1]==str[second]){
                LPS[second]=first+1;
                first++,second++;
            }
            else{
                if(first==0) second++;
                else first = LPS[first]; //if not equal move first to LPS[first]
            }
        }
        return LPS[s.size()]; //get last;
    }
};
