class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxy=0
        l=0
        rko=set()

        for r in range(len(s)):
            if s[r] not in rko:
                rko.add(s[r])
                maxy=max(maxy,r-l+1)
            else:
                while s[r] in rko:
                    rko.remove(s[l])
                    l+=1
                rko.add(s[r])
        return maxy