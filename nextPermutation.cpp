class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        
        int pivotidx=arr.size()-2;
        for(pivotidx=arr.size()-2;pivotidx>=0;pivotidx--){
            if(arr[pivotidx]<arr[pivotidx+1]){
                break;
            }
        }
        if(pivotidx<0){
            reverse(arr.begin(),arr.end());
        }
        else{
            int idx=arr.size()-1;
            while(idx>pivotidx&&arr[idx]<=arr[pivotidx]){
                --idx;
            }
            swap(arr[idx],arr[pivotidx]);
            int i=pivotidx+1;
            int j=arr.size()-1;
            while(i<=j){
                swap(arr[i],arr[j]);
                ++i;
                --j;
            }
        }
    }
};