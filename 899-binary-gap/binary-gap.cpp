class Solution {
public:
    int binaryGap(int n) {
        vector<int> bin;
        int x, j = 0, i = 0, d = 0;
        while (n > 0) {
            x = n % 2;
            bin.push_back(x);
            n /= 2;
        }
        reverse(bin.begin(), bin.end());
        while (j<bin.size()) {
            if (bin[i] == 0) {
                i++;
                j++;
            }
            if (bin[j] == 1){
                d = max(d, j - i);
                i=j;
                j++;
            }
            else j++;
        }
        return d;
    }
};