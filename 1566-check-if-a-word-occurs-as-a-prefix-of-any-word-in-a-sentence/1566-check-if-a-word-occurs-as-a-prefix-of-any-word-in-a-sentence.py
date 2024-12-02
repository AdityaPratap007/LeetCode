class Solution:
    def isPrefixOfWord(self, s: str, t: str) -> int:
        s=" "+s
        t=" "+t
        n=len(s)
        m=s.find(t)
        if m==-1: return -1
        return 1+s[:m].count(" ")
