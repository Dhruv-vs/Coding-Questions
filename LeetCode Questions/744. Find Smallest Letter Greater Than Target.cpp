class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0,end=letters.size()-1;
        // char ans = '\0';  // Initialize with a null character
        // because char cannot be empty
        string ans = "";
        while(start<=end){
            int mid = start+(end-start)/2;
            if(letters[mid]>target){
                ans = letters[mid];
                end = mid-1;
            }
            else 
            start=mid+1;
        }
        // if(ans!='\0') return ans;
        if(!ans.empty()) return ans[0]; // return type char so we write ans[0] only first character
        else return letters[0];
    }
};
