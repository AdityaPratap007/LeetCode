from typing import List

class Solution:
    def compress(self, chars: List[str]) -> int:
        j = 0  
        i = 0  
        
        while i < len(chars):
            x = chars[i]
            c = 0
            
            while i < len(chars) and chars[i] == x:
                c += 1
                i += 1
            
            chars[j] = x
            j += 1
            
            if c > 1:
                for digit in str(c):
                    chars[j] = digit
                    j += 1
        
        return j
