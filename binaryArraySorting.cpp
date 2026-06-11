class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int i=0;
        int idx=0;
        while(idx<arr.size()){
          while(idx<arr.size()&&arr[idx]==1){
            idx++;
          }
          if(idx<arr.size()){
              swap(arr[i],arr[idx]);
              ++i;
              ++idx;
          }
        }
       
    }
};