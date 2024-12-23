class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        arr1={}
        arr1=Counter(arr)
        return len(arr1)==len(set(arr1.values()))
        