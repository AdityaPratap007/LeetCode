class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if len(word1)!=len(word2):
            return False
        cmp1={}
        cmp2={}
        cmp1=Counter(word1)
        cmp2=Counter(word2)
        
        return cmp1.keys()==cmp2.keys() and sorted(cmp1.values())==sorted(cmp2.values())