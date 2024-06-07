class Solution {
public:
    
    int minInsertions(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int n = s.length();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1,0));
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                dp[i][j]=s[i-1]==s[n-j]?1+dp[i-1][j-1]:max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n-dp[n][n];
    
    }
};