#include <vector>  
#include <algorithm>  

class Solution {  
public:  
    vector<vector<int>> merge(vector<vector<int>>& intervals) {  
        vector<vector<int>> final;  

        // Edge case: If intervals are empty  
        if (intervals.empty()) {  
            return final;  
        }  

        // Sort the intervals based on their start times  
        sort(intervals.begin(), intervals.end());  

        // Initialize the first interval as the current interval to merge  
        vector<int> currentInterval = intervals[0];  

        for (int i = 1; i < intervals.size(); i++) {  
            // If the current interval overlaps with the next one  
            if (currentInterval[1] >= intervals[i][0]) {  
                // Merge them by updating the end time  
                currentInterval[1] = max(currentInterval[1], intervals[i][1]);  
            } else {  
                // No overlap, add the current interval to the result and update the current interval  
                final.push_back(currentInterval);  
                currentInterval = intervals[i];  
            }  
        }  

        // Add the last interval  
        final.push_back(currentInterval);  

        return final;  
    }  
};