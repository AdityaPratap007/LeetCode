class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        d=0
        for i in range(1,len(nums)):
            if(nums[i]==nums[i-1]):
                d+=1
            else:
                nums[i-d]=nums[i]
        return len(nums)-d
        