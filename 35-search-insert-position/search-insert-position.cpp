class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=n,low=0,mid,high=n-1;
        while(low<=high)
        {   mid=low+(high-low)/2;
            if(nums[mid]==target)
            {   ans= mid;
                break;
            }
            else if(nums[mid]>target)
            {
                ans = mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};