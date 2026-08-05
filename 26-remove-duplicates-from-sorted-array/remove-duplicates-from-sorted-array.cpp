class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=0,j=1;
        for(;j<=a.size()-1;j++){
            if(a[j]!=a[i])
                a[++i]=a[j];
        }
        return i+1;
    }
};