class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        result=9999999
        summ=0
        start=0
        end=0
        n=len(nums)
        while(end<n):
            summ+=nums[end]
            while(summ>=target):
                result=min(result,end-start+1)
                summ-=nums[start]
                start+=1
            
            end+=1
        if(result==9999999):
            return 0
        return result
    