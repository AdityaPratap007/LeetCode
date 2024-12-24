class Solution:
    def successfulPairs(self, sp: List[int], po: List[int], su: int) -> List[int]:
        # pairs = []  # To store the number of successful pairs for each spell
        # for spell in sp:
        #     count = 0
        #     for potion in po:
        #         if spell * potion >= su:
        #             count += 1
        #     pairs.append(count)
        # return pairs
        pairs=[]
        po.sort()
        m=len(po)
        for spell in sp:
            target=(su+spell-1)//spell
            index=bisect_left(po,target)
            pairs.append(m-index)
        return pairs
            
            
