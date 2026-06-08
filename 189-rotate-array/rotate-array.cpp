class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),j=0;
        vector<int> ans(n);
        if(k>n) k=k%n;
        int x=k;
        while(k>0){
            ans[j]=nums[n-k];
            k--;
            j++;
        }

        for(int i=0;i<(n-x);i++,j++){
            ans[j]=nums[i];
        }
        nums=ans;
    }
};