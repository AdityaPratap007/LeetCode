class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
      int count = 0;
        
        // Iterate through the vector to count elements <= k
        for (int num : nums) {
            if (num <k) {
                count++;
            }
        }
        
        return count;
    }
};