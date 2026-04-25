class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        vector<string> v(numRows);
        string ans;

        int curr = 0;
        bool down = false;

        for(char ch : s){
            v[curr] += ch;

            if(curr == numRows - 1 || curr == 0){
                down = !down;
            }
            if(down) curr++;
            else curr--;
        }
        for(auto st : v){
            ans.append(st);
        }
        return ans;
    }
};