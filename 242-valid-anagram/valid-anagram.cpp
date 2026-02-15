class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        map<char, int> m;
        for (int i : s)
            m[i]++;

        for (int x : t)
            if (--m[x] < 0)
                return false;
        return true;
    }
};