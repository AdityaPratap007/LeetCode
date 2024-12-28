class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        ans=0
        i=0
        for i in range(k):
            ans+=nums[i]
        res=ans
        for j in range(i+1,len(nums)):
            ans+=nums[j]
            ans-=nums[j-k]
            res=max(res,ans)
        return res/k
