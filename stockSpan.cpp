class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int si=0;
        int ei=arr.size()-1;
        int ans=-1;
        while(si<=ei){
            int mid=si+(ei-si)/2;
            if(arr[mid]==1){
                ans=mid;
                ei=mid-1;
            }
            else{
                si=mid+1;
            }
        }
        return ans;
    }
};