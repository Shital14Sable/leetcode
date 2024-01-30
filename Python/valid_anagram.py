class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        str1 = [*s]
        str2 = [*t]
        if len(str2) != len(str1):
            return False
        for fn in str1:
            if fn in str2:
                str2.remove(fn)
        
        if len(str2) > 0:
            return False
        else:
            return True