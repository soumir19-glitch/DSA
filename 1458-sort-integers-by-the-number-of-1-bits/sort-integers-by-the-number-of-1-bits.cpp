class Solution {
public:
    static bool comp(int x,int y){
        int c1=__builtin_popcount(x),c2=__builtin_popcount(y);
        if (c1==c2)
            return x<y;
        return  c1<c2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};