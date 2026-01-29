class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0, count=0,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(c==0)
            {
                c=1;
                ans=nums[i];
            }
            else if(nums[i]==ans)
                c++;
            else 
                c--;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ans)   
                count++;
        }
        if(count>floor(nums.size()/2))
            return ans;
    
    return -1;
    }
};