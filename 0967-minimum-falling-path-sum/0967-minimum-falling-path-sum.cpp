class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int n = matrix.size();
        
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            dp[0][i] = matrix[0][i];
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
               int best = dp[i - 1][j]; 

                if (j > 0) {
                    best = std::min(best, dp[i - 1][j - 1]); 
                }
                if (j < n - 1) {
                    best = std::min(best, dp[i - 1][j + 1]);  
                }

                dp[i][j] += matrix[i][j]+ best; 
            }
        }
        int minPathSum = dp[n - 1][0];
        for (int j = 1; j < n; j++) {
            minPathSum = min(minPathSum, dp[n - 1][j]);
        }
        return minPathSum;
    }
};