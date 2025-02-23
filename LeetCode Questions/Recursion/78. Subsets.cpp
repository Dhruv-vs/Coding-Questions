class Solution {
public:

   void findSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    if (index == nums.size()) {
        result.push_back(current);
        return;
    }
    findSubsets(index + 1, nums, current, result);
    current.push_back(nums[index]);
    findSubsets(index + 1, nums, current, result);
    current.pop_back();
}

    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    findSubsets(0, nums, current, result);
    return result; 
    }
};
