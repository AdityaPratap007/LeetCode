class Solution:
    def decodeString(self, s: str) -> str:
        st=[]
        cs=""
        n=0
        for c in s:
            if c.isdigit():
                n=n*10+int(c)
            elif c =='[':
                st.append((cs,n))
                cs=""
                n=0
            elif c==']':
                ps,num2=st.pop()
                cs=ps+num2*cs
            else:
                cs+=c
        return cs
