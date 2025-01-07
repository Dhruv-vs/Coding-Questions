class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        if(arr.size()==0) return 0;
        // int i=0;
        // for(int j=0;j<arr.size();j++){
        //     if(arr[j]!=arr[i]){
        //         arr[i+1] = arr[j]; // placing the unique on next place
        //         i++;
        //     }
        // }
        // return i+1;
        
        // one more way
        int i=0;
        for(int j=1;j<arr.size();j++){ // we start from 1
            if(arr[j]!=arr[i]){
                i++; // updating the index 
                arr[i] = arr[j]; // and filling the value
            }
        }
        return i+1;
    }
};
