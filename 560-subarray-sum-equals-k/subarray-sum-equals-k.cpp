class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        int s=0,c=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            int prevPrefix=s-k;
            c+=m[prevPrefix];
            m[s]+=1;
        }
        return c;
    }
};