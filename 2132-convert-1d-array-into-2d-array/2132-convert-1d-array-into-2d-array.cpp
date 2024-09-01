class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n != original.size()) {
            return {};
        }

        vector<vector<int>> array(m, vector<int>(n));  // Initialize 2D array with dimensions m x n

        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = original[k++];
            }
        }

        return array;
    }
};
