class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        if(prices.size()==1) return 0;
        vector<int>Minimum(prices.size());
        Minimum[0]=INT_MAX;
        for(int i=1;i<prices.size();i++){
            Minimum[i]=min(Minimum[i-1],prices[i-1]);
        }
        int MaxProfit=0;
        for(int i=0;i<prices.size();i++){
            MaxProfit=max(MaxProfit,prices[i]-Minimum[i]);
        }
        return MaxProfit;
    }
};
