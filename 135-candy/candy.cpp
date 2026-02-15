class Solution {
public:
    int candy(vector<int>& ratings) {
        if (ratings.size() == 1)
            return 1;
        int n = ratings.size();
        vector<int> c(n, 1);
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                c[i] = c[i - 1] + 1;
            }
        }
        if (ratings[n - 1] > ratings[n - 2])
            c[n - 1] = c[n - 2] + 1;
        for (int i = n - 1; i > 0; i--) {
            if (ratings[i] < ratings[i - 1] && c[i - 1] <= c[i]) {
                c[i - 1] = c[i] + 1;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += c[i];
        }
        return sum;
    }
};