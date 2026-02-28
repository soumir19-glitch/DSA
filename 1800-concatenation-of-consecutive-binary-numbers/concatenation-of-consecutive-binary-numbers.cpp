class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans = 0, x = 0;
        const int mod = 1e9 + 7;
        for (int i = 1; i <= n; i++) {  
            if (__builtin_popcount(i) == 1)
                x++;
            ans = ((ans << x) + i)%mod;
        }
        return ans;
    }
};