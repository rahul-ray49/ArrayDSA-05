class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            pq.push({mat[i][0],{i,0}});
        }
        while(!pq.empty()){
            int curr=pq.top().first;
            int row=pq.top().second.first;
            int  col=pq.top().second.second;
            pq.pop();
            ans.push_back(curr);
            if(col+1<mat[row].size()){
                pq.push({mat[row][col+1],{row,col+1}});
            }
        }
        return ans;
    }
};