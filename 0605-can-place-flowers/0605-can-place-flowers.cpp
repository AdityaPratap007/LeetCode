class Solution {
public:
    bool canPlaceFlowers(vector<int>& fd, int n) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int i = 0;
        while (i < fd.size() && n > 0) {
            if (fd[i] == 1) {
                i += 2;  // Skip the next position if current position has a flower
            } else {
                if (i == fd.size() - 1 || fd[i + 1] == 0) {  // Check next position
                    n--;  // Place a flower
                    i += 2;  // Skip the next position
                } else {
                    i += 3;  // Skip two positions ahead if next position has a flower
                }
            }
        }
        return n <= 0;
    }
};
