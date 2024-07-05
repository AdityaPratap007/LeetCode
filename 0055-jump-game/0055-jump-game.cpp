class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        
        for(int i=0;i<n;i++)
        {   if(j<i) return false;
            j=max(i+nums[i],j);
        } 

        return true;
    }
};