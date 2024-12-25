class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        x = max(candies)  
        t = []
        for i in range(len(candies)):
            if candies[i] + extraCandies >= x:  
                t.append(True)
            else:
                t.append(False)
        return t
