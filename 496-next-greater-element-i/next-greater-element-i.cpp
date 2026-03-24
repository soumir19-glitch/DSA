class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums2.size());
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i])
                st.pop();
            if (st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();
            st.push(nums2[i]);
        }
        vector<int> arr(nums1.size());
        for (int i = 0; i < nums1.size(); i++) {
            int ind =
                find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
            arr[i] = ans[ind];
        }
        return arr;
    }
};