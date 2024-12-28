class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        v='aeiouAEIOU'
        a=i=c=0
        r=""
        for i in range(k):
            if s[i] in v:
                c+=1
        a=max(a,c)
        for j in range(i+1,len(s)):
            if s[j] in v:
                c+=1
            if s[j-k] in v:
                c-=1
            a=max(a,c)
        return a

        