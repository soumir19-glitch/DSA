class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls = 0, total = 0;
        for (int i = 0; i < nums.size(); i++)
            total += nums[i];
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0)
                ls = 0;
            else
                ls += nums[i - 1];
            int rs = total - ls - nums[i];
            if (ls == rs)
                return i;
        }
        return -1;
    }
};