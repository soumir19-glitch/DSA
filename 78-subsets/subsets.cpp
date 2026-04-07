class Solution {
public:
    void bloo(int x, vector<int>& temp, vector<int>& nums, int n,
              vector<vector<int>>& ans) {
        if (x == n) {
            ans.push_back(temp);
            return;
        }
        bloo(x + 1, temp, nums, n, ans);    //dont take
        temp.push_back(nums[x]);
        bloo(x + 1, temp, nums, n, ans);    //take
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        int n = nums.size();
        bloo(0, temp, nums, n, ans);
        return ans;
    }
};