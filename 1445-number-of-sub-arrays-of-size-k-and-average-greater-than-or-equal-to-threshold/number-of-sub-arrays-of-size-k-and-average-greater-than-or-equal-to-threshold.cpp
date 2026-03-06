class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, count = 0;
        for (int j = 0; j < arr.size(); j++) {
                sum += arr[j];
            if (j >= k)
                sum -= arr[j - k];
            if (j>=k-1 && sum / k >= threshold)
                count++;
        }
        return count;
    }
};