class Solution {
public:
    const long long mod = 1e9 + 7;
    long long bloo(int x, long long n) {
        if (n == 0)
            return 1;
        long long half = bloo(x, n / 2);
        long long result = (half * half) % mod;
        if (n % 2 == 0)
            return result;
        else
            return (result * x) % mod;
    }
    int countGoodNumbers(long long n) {
        if (n == 0)
            return 1;
        return bloo(5, (n + 1) / 2) * bloo(4, n / 2) % mod;
    }
};