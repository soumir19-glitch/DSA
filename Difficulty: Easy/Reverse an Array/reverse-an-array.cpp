class Solution {
  public:
  void rev(vector<int> &a,int l,int r){
      if(l>=r)  return;
      swap(a[l],a[r]);
      return rev(a,l+1,r-1);
  }
    void reverseArray(vector<int> &arr) {
        rev(arr,0,arr.size()-1);
    }
};