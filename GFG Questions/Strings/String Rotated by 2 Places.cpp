class Solution {
  public:
    void clockwise(string& s){
        char c = s[s.size()-1];
        for(int i=s.size()-2;i>=0;i--){
            s[i+1] = s[i];
        }
        s[0] = c;
    }
    void anticlockwise(string& s){
        char c = s[0];
        for(int i=1;i<s.size();i++){
            s[i-1] = s[i];
        }
        s[s.size()-1] = c;
    }
    bool isRotated(string& s1, string& s2) {
        string rotateclock=s1;
        string rotateanti=s1;
        clockwise(rotateclock);
        clockwise(rotateclock);
        if(rotateclock==s2) return true;
        
        anticlockwise(rotateanti);
        anticlockwise(rotateanti);
        if(rotateanti==s2) return true;
        
        return false;
        
    }
};
