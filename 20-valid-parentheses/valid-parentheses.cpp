class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1) return false;
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            else {
                if (st.empty())
                    return false;
                if (st.top() == '(' && ch == ')' ||
                    st.top() == '{' && ch == '}' ||
                    st.top() == '[' && ch == ']')
                    st.pop();
                else
                    return 0;
            }
        }
        return st.empty();
    }
};