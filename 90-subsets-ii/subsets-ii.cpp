class Solution {
public:
    void bloo(int ind, vector<int> curr,vector<int>& nums,vector<vector<int>>& ans){
         if(ind == nums.size()){
            ans.push_back(curr);
            return;
        }

        // PICK
        curr.push_back(nums[ind]);
        bloo(ind + 1, curr, nums, ans);
        curr.pop_back();

        // NOT PICK 
        int i = ind;
        while(i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }
        bloo(i + 1, curr, nums, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        bloo(0,curr,nums,ans);
        return ans;   
    }
};