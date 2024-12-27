class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j=0
        if (len(s)==0): return True
        if len(t)==0: return False
        for i in t:
            if j < len(s) and s[j] == i:
                j+=1
        return j==len(s)


            
            