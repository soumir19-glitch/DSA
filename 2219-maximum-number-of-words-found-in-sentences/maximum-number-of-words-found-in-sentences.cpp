class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int f=0;
            for(char x:s[i]){
            if(x == ' ') f+=1;
            }
          ans=max(ans,f+1);
        }
        return ans;
    }
};