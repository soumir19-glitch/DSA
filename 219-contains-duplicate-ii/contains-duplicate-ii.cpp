class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int j = 0;
        map<int, int> m;
        while (j < nums.size()) {
            if (m.find(nums[j]) != m.end()) { // in map already
                int prev = m[nums[j]];
                m[nums[j]] = j;
                if (abs(prev - m[nums[j]]) <= k)
                    return true;
                j++;
            } else {
                m[nums[j]]=j;
                j++;
            }
        }
        return false;
    }
};