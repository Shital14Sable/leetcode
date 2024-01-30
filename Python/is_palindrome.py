class Solution:
    def isPalindrome(self, s: str) -> bool:
        r=''
        for i in s:
            if i.isalnum():
                r=r+i
        if r == " ":
            return 1
        else: 
            r = (r.replace(" ", "")).lower()
        return r == r[::-1]