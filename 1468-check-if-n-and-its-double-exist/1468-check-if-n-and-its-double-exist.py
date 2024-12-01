class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        
        for i in range(len(arr)):
            if arr[i]==0 and arr.count(0)==1: continue
            if (arr[i]*2) in arr:
                return True
        return False

        