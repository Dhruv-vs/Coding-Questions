class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int start = 0, end = 1;
        while (end < n) {
            int diff = abs(arr[end] - arr[start]);
            
            if (start == end) { 
                end++;
            } else if (diff == x) { 
                return true;
            } else if (diff < x) { 
                end++;
            } else { 
                start++;
            }
        }
        
        return false;
    }
};
