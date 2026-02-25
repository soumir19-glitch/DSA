class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            int og = i;
            bool valid = true;

            while (og > 0) {
                int digit = og % 10;

                if (digit == 0 || i % digit != 0) {
                    valid = false;
                    break;
                }

                og /= 10;
            }

            if (valid)
                ans.push_back(i);
        }

        return ans;
    }
};