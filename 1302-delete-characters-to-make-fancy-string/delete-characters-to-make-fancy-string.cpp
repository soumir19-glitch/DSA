class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        if (n <= 2)
            return s;
        string ans;
        for (int i = 0; i < n; i++) {
            int m = ans.size();
            if (m >= 2 && ans[m - 1] == s[i] && ans[m - 2] == s[i]) {
                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};