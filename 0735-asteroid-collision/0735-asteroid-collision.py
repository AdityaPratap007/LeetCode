class Solution:
    def asteroidCollision(self, asd: List[int]) -> List[int]:
        st=[]
        for a in asd:
            while st and a<0<st[-1]:
                if -a>st[-1]:
                    st.pop()
                    continue
                elif -a==st[-1]:
                    st.pop()
                break
            else:
                st.append(a)
        return st