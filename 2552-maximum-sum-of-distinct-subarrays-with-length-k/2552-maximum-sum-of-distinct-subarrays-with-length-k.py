from typing import List

class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        charset = set()
        l = 0
        s = 0
        maxy = 0

        for r in range(len(nums)):
            while nums[r] in charset or len(charset) >= k:
                charset.remove(nums[l])
                s -= nums[l]
                l += 1
            
            charset.add(nums[r])
            s += nums[r]
            
            if len(charset) == k:
                maxy = max(maxy, s)
        
        return maxy
