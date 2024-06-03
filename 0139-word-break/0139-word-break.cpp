class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        vector<bool> dp(s.size()+1,0);
        dp[0]=true;
        unordered_set<string> set(wordDict.begin(),wordDict.end());
        for(int i=0;i<=s.size();i++){
            for(int j=0;j<i;j++){
                if(dp[j]&& set.count(s.substr(j,i-j))){

                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};