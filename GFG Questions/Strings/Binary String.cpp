class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        long count=0;
        for(int i=0;i<a.size();i++){
            // '1' is a char type
            if(a[i]=='1') count++;
        }
        // use formula of combination of nCr n!*(n-1)!/2;
        return count*(count-1)/2;
    }

};
