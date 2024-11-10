class Solution(object):
    def isPalindrome(self, s):
        s=s.lower()
        s=''.join(item for item in s if item.isalnum())
        r="".join(reversed(s))
        if s==r:
            return True
        else:
            return False
        