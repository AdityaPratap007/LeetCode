class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s = ''.join(item for item in s if item.isalnum())
        return s == s[::-1]
