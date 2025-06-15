class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        int start = 1;
        int end = *max_element(arr.begin(), arr.end()); 

        while (start <= end) {
            int mid = (start + end) / 2;
            int sum = 0;

            for (int i = 0; i < arr.size(); i++) {
                sum += ceil((double)arr[i] / mid);
            }

            if (sum <= k) {
                end = mid - 1; // try smaller
            } else {
                start = mid + 1; // need bigger divisor
            }
        }
        return start;
    }
};
