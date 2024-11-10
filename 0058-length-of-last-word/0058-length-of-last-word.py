class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        s=s[::-1]
        i=0
       
        while s[i]!=" ":
            if i>=len(s)-1:
                return i+1
            i+=1
        return i