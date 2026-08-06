class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i=0;
        while(i<a.size()){
            if(a[i]!=0) i++;
            else    break;
        }
        int j=i+1;
        for(;j<a.size();j++){
            if(a[j]!=0){
                swap(a[i],a[j]);
                i++;
            }
        }

    }
};