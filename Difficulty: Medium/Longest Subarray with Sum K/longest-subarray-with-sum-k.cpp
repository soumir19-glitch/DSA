class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<long long,int> m;
        long long sum=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k) 
                ans=max(ans,i+1);
            int rem=sum-k;
            if(m.find(rem)!=m.end()){
                int len=i-m[rem];
                ans=max(ans,len);
            }
            if(m.find(sum)==m.end())
            m[sum]=i;
        }
        return ans;
    }
};