class Solution {
  public:
    static bool comp(pair<int,int> a, pair<int,int> b){
        double r1 = (double)a.first / a.second;
        double r2 = (double)b.first / b.second;

        return r1 > r2;   
    }
  
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<pair<int,int>> items;
        for(int i = 0; i < n; i++){
            items.push_back({val[i], wt[i]});
        }
        sort(items.begin(), items.end(), comp);

        double total=0;
        for(int i=0;i<n;i++){
            int value = items[i].first;
            int weight = items[i].second;

            if(weight <= capacity){
                total += value;
                capacity -= weight;
            }
            else{
                total += (double)value * capacity / weight;
                break;
            }
        }
        return total;
    }
};
