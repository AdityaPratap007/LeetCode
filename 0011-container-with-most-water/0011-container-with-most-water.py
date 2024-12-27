class Solution:
    def maxArea(self, h: List[int]) -> int:
        n=len(h)
        ans=0
        l,r=0,n-1
        while(l<r):
            area=min(h[r],h[l])*(r-l)
            ans=max(area,ans)

            if h[l]<h[r]:
                l+=1
            else:
                r-=1
        return ans