class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        if(nums.size()<3) return 0;
        int n=nums.size();
        int closet =nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue ;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum1 =nums[i]+nums[j]+nums[k];
                if (sum1==target) return sum1;
                if (std::abs(target-sum1)<std::abs(target-closet)){
                    closet=sum1;
                }
                if(sum1>target) k--;
                else j++;
            }
        }
        return closet;
    }

};