class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
            int r=0;
        for (int j=0;j<accounts[0].size();j++){
            r+=accounts[0][j];
        }
        for(int i=1;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            r=max(sum,r);
            
        }
        return r;
    }
};