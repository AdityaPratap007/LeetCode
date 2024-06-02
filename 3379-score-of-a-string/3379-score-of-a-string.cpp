class Solution {
public:
    int scoreOfString(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int sum=0;
        for(auto i=0;i<s.size()-1;i++){
            sum+=abs((s[i])-(s[i+1]));
        }
        return sum;
    }
};