class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0, leftSum = 0;
        
        // Calculate the total sum of the array
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }
        
        // Iterate through the array to find the pivot index
        for (int i = 0; i < n; i++) {
            // If the left sum is equal to the right sum (right sum = totalSum - leftSum - nums[i])
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }
        
        return -1; // Return -1 if no pivot index is found
    }
};
