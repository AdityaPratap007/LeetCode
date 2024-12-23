class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        # s1='aeiou'
        # mx=0
        # mx1=0
        # for i in range(len(s)-k+1):
        #     for j in range(i,i+k):
        #         if s[j] in s1:
        #             mx+=1
        #     mx1=max(mx1,mx)
        #     mx=0
        # return mx1    //Brute force Method 
        s1=set('aeiou')
        mx=0
        mx1=0
        for i in range(k):
            if s[i] in s1:
                mx+=1
        mx1=mx
        
        for i in range(k,len(s)):
            if s[i] in s1:
                mx+=1
            if s[i-k] in s1:
                mx-=1
            mx1=max(mx1,mx)
        return mx1


        