class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>vec;
        vector<int>ans={1};
        int row=1;
        while(row!=n){
            vec.push_back(1);
            for(int i=0;i<ans.size()-1;i++){
                vec.push_back(ans[i]+ans[i+1]);
            }
            vec.push_back(1);
            ans=vec;
            vec.clear();
            ++row;
        }
        return ans;
    }
};