class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size() - 1,left = 0, right = matrix[0].size() - 1;
        vector<int> ans;
        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++) // first row
                ans.push_back(matrix[top][j]);
            top++;
            for (int j = top; j <= bottom; j++) // last col
                ans.push_back(matrix[j][right]);
            right--;

            if (top <= bottom) {
                                               // right to left
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[bottom][j]);
                bottom--;
            }

            if (left <= right) {
                                                // bottom to top
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};