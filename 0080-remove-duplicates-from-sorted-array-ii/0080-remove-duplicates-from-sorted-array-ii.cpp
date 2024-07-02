class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        
        int index = 0;
        for (auto i = map.begin(); i != map.end(); i++) {
            if (i->second == 1) {
                nums[index] = i->first;
                index++;
            }
            if(i->second>=2)
             {
                nums[index] = i->first;
                nums[index + 1] = i->first;
                index += 2;
            }
        }
        nums.resize(index);
        sort(nums.begin(), nums.begin()+index);
        
        return index;
    }
};