class Solution {
public:
    void bloo(int x, vector<int>& temp, vector<int>& nums,
              vector<vector<int>>& ans) {
        if (x == nums.size()) {
            ans.push_back(temp);
            return;
        }
        bloo(x + 1, temp, nums, ans);    //dont take
        temp.push_back(nums[x]);
        bloo(x + 1, temp, nums, ans);    //take
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        bloo(0, temp, nums, ans);
        return ans;
    }
};