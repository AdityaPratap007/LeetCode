class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        frequency = Counter(nums)  # O(n) time complexity

        return heapq.nlargest(k, frequency.keys(), key=frequency.get)
