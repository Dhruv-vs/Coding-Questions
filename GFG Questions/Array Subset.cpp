class Solution {
public:
    bool isPresent(vector<int>& a, int k) {
        int start = 0, end = a.size() - 1, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (a[mid] == k) return true;
            else if (a[mid] < k) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
    
    bool isSubset(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());  // Sort `a` for binary search
        for (int i = 0; i < b.size(); i++) {
            if (!isPresent(a, b[i])) return false; //either one or more are not present of b in a
        }
        return true;// all are present in a
    }
};
