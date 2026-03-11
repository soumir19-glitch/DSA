class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, dsum = 0;
        for (int i : nums)
            dsum += i;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 9) {
                int x = nums[i];
                while (x > 0) {
                    sum += x % 10;
                    x /= 10;
                }
            } else
                sum += nums[i];
        }
        return abs(dsum - sum);
    }
};