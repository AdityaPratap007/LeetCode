class Solution:
    def countSeniors(self, details: List[str]) -> int:
        age=0;
        for i in range(len(details)):
            s =details[i]
            if(int(s[11:13])>60):
                age+=1

    
        return age