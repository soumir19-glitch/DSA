class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=0,h=nums.size(),m;
        sort(nums.begin(),nums.end());
        while(l<h){
            m=(l+h)/2;
            if(nums[m]==m)
                l=m+1;
            else if(nums[m]>m)
                h=m;
        }
        return l;
    }
};