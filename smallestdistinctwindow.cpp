class Solution {
  public:
    int findSubString(string& str) {
        // code here
        int i=0;
        int j=0;
        unordered_map<char,int>mp;
        for(int i=0;i<str.size();i++){
            ++mp[str[i]];
        }
        int k=mp.size();
        int count=0;
        int minsize=INT_MAX;
         for(int i=0;i<str.size();i++){
            --mp[str[i]];
        }
        while(j<str.size()){
            ++mp[str[j]];
            if(mp[str[j]]==1){
                ++count;
            }
            if(count<k){
                ++j;
            }
            else{
                while(i<=j&&count==k){
                    minsize=min(minsize,j-i+1);
                    --mp[str[i]];
                    if(mp[str[i]]==0){
                        --count;
                    }
                    ++i;
                }
                ++j;
            }
        }
        return minsize;
        
    }
};