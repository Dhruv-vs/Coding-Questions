class Solution{
    public:
    void find_per(string s, int index, vector<string> &res) {
        if (index == s.size() - 1) {
            res.push_back(s);
            return;
        }

        for (int i = index; i < s.size(); i++) {
            swap(s[i], s[index]);
            find_per(s, index + 1, res);
            swap(s[i], s[index]); // Backtrack
        }
    }

    vector<string> permutation(string S) {
        vector<string> res;
        find_per(S, 0, res);
        sort(res.begin(), res.end()); // Ensure lexicographical order
        // sort will sort in increasing order that is required in the question
        return res;
    }
};
