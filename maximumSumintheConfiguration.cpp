class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
        int mulSum=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            mulSum+=i*arr[i];
        }
        maxi=max(maxi,mulSum);
        queue<int>q;
        for(int i=arr.size()-1;i>=0;i--){
            q.push(arr[i]);
        }
        int count=arr.size();
        while(count>0){
            int sumTobeAdded=sum-q.front();
            mulSum=mulSum-(q.front()*(q.size()-1));
            mulSum+=sumTobeAdded;
            maxi=max(mulSum,maxi);
            int a=q.front();
            q.pop();
            q.push(a);
            --count;
        }
        return maxi;
    }
};