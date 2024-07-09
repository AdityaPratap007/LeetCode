class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long currentTime = 0, totalWaitingTime = 0;
        int n = customers.size();
        
        for (const auto& customer : customers) {
            currentTime = max(currentTime, (long long)customer[0]) + customer[1];
            totalWaitingTime += currentTime - customer[0];
        }
        
        return (double)totalWaitingTime / n;
    }
};
