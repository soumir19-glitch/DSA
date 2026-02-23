class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        if(n-k+1<(1<<k)) return false;
        unordered_set<string> st;
        for(int i=0;i<=n-k;i++){
            string sub="";
            for(int x=i;x<i+k;x++){
                sub+=s[x];
            }
            st.insert(sub);
            if(st.size()==(1<<k))  return true;
        }
        return false;

    }
};