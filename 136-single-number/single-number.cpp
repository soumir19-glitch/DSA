class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int low=1,high=n-2,m;
        sort(nums.begin(),nums.end());
        if(n==1) return nums[0];
        else if(nums[0]!=nums[1])
            return nums[0];
        else if(nums[n-1]!= nums[n-2])
            return nums[n-1];
        while(low<=high)
        {   
            m=(low+high)/2;
            if(nums[m]!=nums[m-1]&& nums[m]!=nums[m+1])
                return nums[m];
            else
            {
                if((m%2==1 && nums[m-1]==nums[m]) || (m%2==0 && nums[m]==nums[m+1]))
                    low=m+1;
                else
                    high=m-1;
            }
        }
        return -1;
    }
};