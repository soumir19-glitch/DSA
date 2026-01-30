class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0, ans1 = INT_MIN, ans2 = INT_MAX, count1 = 0,
            count2 = 0, n = nums.size();
        vector<int> final;
        for (int i = 0; i < n; i++) {
            if (c1 == 0 && ans2 != nums[i]) {
                c1++;
                ans1 = nums[i];
            } else if (c2 == 0 && ans1 != nums[i]) {
                c2++;
                ans2 = nums[i];
            } else if (nums[i] == ans1)
                c1++;
            else if (nums[i] == ans2)
                c2++;
            else {
                c2--;
                c1--;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == ans1)
                count1++;
            else if (nums[i] == ans2)
                count2++;
        }
        if (count1 > (n / 3))
            final.push_back(ans1);
        if (count2 > (n / 3))
            final.push_back(ans2);
        return final;
    }
};