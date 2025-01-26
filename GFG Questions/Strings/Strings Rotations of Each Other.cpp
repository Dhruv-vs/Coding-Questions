class Solution {
  public:
    void clockwise(string& s){
    char c = s[s.size()-1];
    for(int i=s.size()-2;i>=0;i--){
        s[i+1] = s[i];
    }
    s[0] = c;
    }
    bool areRotations(string &s1, string &s2) {
        // gives tle O(N*N)
    //  for(int i=0;i<s1.size();i++){
    //      clockwise(s1);
    //      if(s1==s2) return true;
    //  }   
    //  return false;
    
    // better O(N)
        if (s1.size() != s2.size()) return false;
        string temp = s1 + s1; 
        return temp.find(s2) != string::npos; //npos means not present
    }
};
