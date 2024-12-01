class Solution:
    def longestPalindrome(self, s: str) -> str:
        def palindrome(l,r):
            while l>=0 and r<len(s) and s[l]==s[r]:
                l-=1
                r+=1
            return s[l+1:r]


        


        longest=""
        for i in range(len(s)):
            sub1=palindrome(i,i)
            sub2=palindrome(i,i+1)
            longest=max(sub1,sub2,longest,key=len)
        return longest