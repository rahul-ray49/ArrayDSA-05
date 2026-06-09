class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int>q;
        vector<int>vec;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push(arr[i]);
        }
    }
    if(q.empty()){
        vec.push_back(0);
    }
    else{
        vec.push_back(q.front());
        
    }
    int j=0;
    for(int i=k;i<arr.size();i++){
        if(!q.empty()&&arr[j]==q.front()){
            q.pop();
            ++j;
        }
        else{
            ++j;
        }
        if(arr[i]<0){
            q.push(arr[i]);
        }
        if(!q.empty()){
            vec.push_back(q.front());
           
        }
        else{
            vec.push_back(0);
           
        }
    }
    return vec;
        
    }
};