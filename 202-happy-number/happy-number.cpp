class Solution {
public:
    bool isHappy(int n) {
        if (n == 1)
            return true;
        unordered_set<int> done;
        int ans = 0;
        while (n != 1 && done.find(n) == done.end()) {
            done.insert(n);
            ans = 0;
            while (n > 0) {
                int digit = n % 10;
                ans += digit * digit;
                n /= 10;
            }
            n = ans;
        }
        return n == 1;
    }
};