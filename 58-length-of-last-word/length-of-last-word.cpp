class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, n = s.size(), i = n, x = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (isalpha(s[i])) {
                count++;
                x++;
            } else if (x != 0)
                break;
        }
        return count;
    }
};