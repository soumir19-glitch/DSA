class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,i=0,j=0,n=s.size();
        unordered_set<char> used;
        while(j<n){
            if(used.count(s[j])){
                used.erase(s[i]);
                i++;  
            }
            else{
                used.insert(s[j]);
                ans=max(ans,j-i+1);
                j++;
            }
        }
        return ans;
    }
};