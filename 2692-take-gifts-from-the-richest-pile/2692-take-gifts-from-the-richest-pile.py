
class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        for _ in range(k):
            gifts.sort(reverse=True)  # Sort in descending order
            gifts[0] = math.floor(gifts[0] ** 0.5)  # Use math.floor for clarity
        
        return sum(gifts)  # Use built-in sum for efficiency
