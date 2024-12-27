class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = []
        if nums.count(0) == 0:
            t = prod(nums)
            ans = [t//i for i in nums] 
        else:
            for i in range(len(nums)):
                ans.append(prod(nums[0:i])*prod(nums[i+1:len(nums)]))
        return ans
