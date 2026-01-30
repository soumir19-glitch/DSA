class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int sum=0,i;
        for (i = 0; i < nums.size(); i++) {
             sum = target - nums[i];
            if (m.count(sum))
                break;
            m[nums[i]] = i;
        }
        return {m[sum], i};
    }
};