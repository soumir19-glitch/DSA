class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = n;
        while (ans < 100) {
            int num = ans,x=1;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 0) {
                    x = 0;
                    break;
                } else
                    x *= digit;
                num /= 10;
            }
            if (x % t == 0)
                return ans;
            else
                ans++;
        }
        return ans;
    }
};