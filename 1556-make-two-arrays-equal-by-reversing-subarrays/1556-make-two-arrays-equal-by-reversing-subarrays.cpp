class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::sort(arr.begin(),arr.end());
        std::sort(target.begin(),target.end());
        return target==arr;
        
    }
};