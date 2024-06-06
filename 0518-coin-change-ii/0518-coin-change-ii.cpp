class Solution {
public:
    int change(int amount, vector<int>& coins) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        vector<int> dp(amount+1,0);
        dp[0]=1;
        for(int coin : coins){
            for(int j=coin;j<=amount;j++){
                dp[j]+=dp[j-coin];
            }
        }
        return dp[amount];
    }
};