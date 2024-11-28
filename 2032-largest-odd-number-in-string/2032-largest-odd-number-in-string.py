class Solution:
    def largestOddNumber(self, num: str) -> str:
        # Traverse the string from the end to find the first odd digit
        for i in range(len(num) - 1, -1, -1):
            if int(num[i]) % 2 == 1:  # Check if the digit is odd
                return num[:i + 1]  # Return the substring up to this position
        return ""  # Return an empty string if no odd digit is found
