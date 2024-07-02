class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int m=nums.size();
        for(int i=0;i<m/2;i++){
                arr.push_back(nums[i]);
                arr.push_back(nums[n+i]);
        }
        return arr;
    }
};