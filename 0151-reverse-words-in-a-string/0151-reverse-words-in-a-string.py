class Solution:
    def reverseWords(self, s: str) -> str:
        st = []
        j = []
        x = ""
        s = s.strip()  # Remove leading/trailing spaces
        
        # Push all characters onto the stack
        for i in s:
            st.append(i)
        
        while st:
            char = st.pop()
            if char == " ":
                if x: 
                    j.append(x[::-1]) 
                    x = ""
            else:
                x += char
        
        if x:
            j.append(x[::-1])
        
        return " ".join(j)
