class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> res;
        sort(num.begin(), num.end());

        for (int i = 0; i < num.size(); i++) {
            if (i > 0 && num[i] == num[i-1]) continue;

            int target = -num[i];
            int front = i + 1;
            int back = num.size() - 1;

            while (front < back) {
                int sum = num[front] + num[back];

                if (sum < target) {
                    front++;
                } else if (sum > target) {
                    back--;
                } else {
                    res.push_back({num[i], num[front], num[back]});

                    while (front < back && num[front] == num[front + 1]) front++;
                    while (front < back && num[back] == num[back - 1]) back--;
                    
                    front++;
                    back--;
                }
            }
        }
        return res;
    }
};