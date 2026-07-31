class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1)
            return x;
        int l = 1, m = 0, h = x;
        while (l <= h) {
            m = l+(h-l)/ 2;
            if (m > x / m)
                h = m - 1;
            else if (m == x / m)
                return m;
            else
                l = m + 1;
        }
        return h;
    }
};