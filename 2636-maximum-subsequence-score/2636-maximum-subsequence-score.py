class Solution:
    def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
        ans,heap,heap_sum=0,[],0
        for num2,num1 in reversed(sorted(zip(nums2,nums1))):
            heapq.heappush(heap,num1)
            heap_sum+=num1
            if len(heap)>k:
                heap_sum -= heappop(heap)
            if len(heap)==k:
                ans=max(heap_sum * num2, ans)
        return ans