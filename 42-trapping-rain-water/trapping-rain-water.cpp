class Solution {
public:
    int trap(vector<int>& a) {
        int lMax = 0, rMax = 0, ans = 0, l = 0, r = a.size()-1;
        while (l < r) {
            if (a[l] <= a[r]) {
                if (lMax>a[l])
                    ans += lMax - a[l];
                else
                    lMax = a[l];
                l++;
            } else {
                if (rMax > a[r])
                    ans += rMax - a[r];
                else
                    rMax = a[r];
                r--;
            }
        }
        return ans;
    }
};