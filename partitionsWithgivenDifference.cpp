class Solution {
  public:
  int helper(vector<vector<int>>&dp,vector<int>&arr,int i,int target){
         if(i==0){
           if(target==0&&arr[i]==0) return 2;
           if(target==0&&arr[i]!=0) return 1;
           if(target!=0&&arr[i]==target) return 1;
           if(target!=0&&arr[i]!=target) return 0;
       }
       if(dp[i][target]!=-1) return dp[i][target];
       int notpick=helper(dp,arr,i-1,target);
       int pick=0;
       if(arr[i]<=target) pick=helper(dp,arr,i-1,target-arr[i]);
       return dp[i][target]=notpick+pick;
    }
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
        }
        int s=sum+diff;
        if(s%2!=0) return 0;
        int requireSum=s/2;
        vector<vector<int>>dp(arr.size(),vector<int>(requireSum+1,-1));
        return helper(dp,arr,arr.size()-1,requireSum);
    }
};