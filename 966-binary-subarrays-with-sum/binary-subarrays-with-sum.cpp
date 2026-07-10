class Solution {
public:
    int func(vector<int>& a,int goal){
        if(goal<0)  return 0;
        int l=0,r=0, sum = 0, ans = 0;
        while (r<=a.size()-1) {
            sum+=a[r];
            while(sum>goal){
                sum-=a[l];
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& a, int goal) {
        return func(a,goal)-func(a,goal-1);
    }
};