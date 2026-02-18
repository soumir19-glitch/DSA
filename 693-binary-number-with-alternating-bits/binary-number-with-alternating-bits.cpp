class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x = 2, prev = n % 2;
        while (n > 0) {
            n = n / 2;
            x = n % 2;
            if (prev == x)
                return false;
            prev = x;
        }
        return true;
    }
};