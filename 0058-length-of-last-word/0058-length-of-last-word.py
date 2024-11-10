class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        s=s[::-1]
        i=0
       
        while s[i]!=" ":
            i+=1
            if i>=len(s):
                return i
        return i