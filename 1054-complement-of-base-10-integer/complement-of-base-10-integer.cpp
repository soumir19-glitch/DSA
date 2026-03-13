class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int x=n;
        string ans="";
        while(x!=0){
            ans.insert(ans.begin(),char(x%2+'0'));
            x/=2;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='0')    
                ans[i]='1';
            else    ans[i]='0';
        }
        return stoi(ans,nullptr,2);
    }
};