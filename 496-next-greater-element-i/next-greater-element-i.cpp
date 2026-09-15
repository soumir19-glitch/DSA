class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        stack<int> st;
        unordered_map<int, int> mp;
        int ele = -1;
        vector<int> ans;
        for (int j = n2.size() - 1; j >= 0; j--) {
            if (st.empty())
                    mp[n2[j]] = -1;
            else if (n2[j] < st.top()) 
                mp[n2[j]] = st.top();
            else {
                while (!st.empty() && st.top() <= n2[j]) {
                    st.pop();
                }
                if (st.empty())
                    mp[n2[j]] = -1;
                else{
                    mp[n2[j]] = st.top();
                }
            }
            st.push(n2[j]);
        }
        for (int i = 0; i < n1.size(); i++) {
            ans.push_back(mp[n1[i]]);
        }
        return ans;
    }
};