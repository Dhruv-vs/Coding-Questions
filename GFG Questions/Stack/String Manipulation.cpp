class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        stack<string>s;
        int i=0;
        while(i<arr.size()){
            if(s.size()==0) s.push(arr[i]);
            else{
                if(s.top()==arr[i]) s.pop();
                else s.push(arr[i]);
            }
            i++;
        }
        return s.size();
    }
};
