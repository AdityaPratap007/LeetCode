class Solution {
public:
    
    int minInsertions(string s) {
       
        int n = s.length();
        std::vector<vector<int>> dp(n + 1, vector<int>(n + 1,0));
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                dp[i][j]=s[i-1]==s[n-j]?1+dp[i-1][j-1]:std::max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n-dp[n][n];
    
    }
};