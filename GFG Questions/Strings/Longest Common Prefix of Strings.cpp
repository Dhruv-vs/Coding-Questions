// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        int count =0;
        int m = INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(m>arr[i].size()){
                m = arr[i].size(); //storing size of smallest string in array
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=1;j<arr.size();j++){
                if(arr[j-1][i]!=arr[j][i]){ //eg arr[0][0]!=arr[1][0]
                    if(count)
                    return arr[0].substr(0,count);
                    else
                    return ""; //if count=0 return empty
                }
            }
            count++; // means first col all char are equal
        }
         // printing the sub till count
         if(count)
         return arr[0].substr(0,count);
         else 
         return "";
    }
};
