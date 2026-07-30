class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,m,h=arr.size()-1,miss=0;
        while(l<=h){
            m=(l+h)/2;
            miss=arr[m]-(m+1);
            if(miss>=k) h=m-1;
            else    l=m+1;
        }
        return l+k;
    }
};