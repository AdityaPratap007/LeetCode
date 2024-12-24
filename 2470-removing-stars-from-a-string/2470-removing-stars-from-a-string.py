class Solution:
    def removeStars(self, s: str) -> str:
        st=[]
        ans=""
        for c in s:
            if c.isalpha():
                st.append(c)
            elif c =='*':
                st.pop()
        while(st):
            ans+=st.pop()
        return ans[::-1]