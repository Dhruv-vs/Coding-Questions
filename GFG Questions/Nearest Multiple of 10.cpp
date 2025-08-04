class Solution {
  public:
    string roundToNearest(string& s) {
       int n = s.size();
        int lastDigit = s[n - 1] - '0';

        if (lastDigit <= 5) {
            s[n - 1] = '0';
        } else {
            s[n - 1] = '0';
            int i = n - 2;

            while (i >= 0) {
                if (s[i] < '9') {
                    s[i] += 1;
                    break;
                } else {
                    s[i] = '0';
                    i--;
                }
            }
            if (i < 0) {
                s = '1' + s;
            }
        }
        return s;
    }
};
