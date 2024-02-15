class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        if len(s) == 0:
            return 0
        elif len(s) == 1:
            return 1
        s_Count = [0] * 26
        for i in range(k):
            index = ord(s[i]) - ord("A")
            s_Count[index] += 1
        l = 0
        r = k
        if r == len(s):
            return r
        main_char = max(s_Count)
        max_count = 0
        k_temp = max(s_Count) - main_char
        while r < len(s) and l <= r:
            if k_temp <= k:
                index = ord(s[r]) - ord("A")
                s_Count[index] += 1
                r += 1
            elif k_temp > k:
                index = ord(s[l]) - ord("A")
                s_Count[index] -= 1
                l += 1
            
            main_char = max(s_Count)
            k_temp = sum(s_Count) - main_char
            if k_temp <= k:
                max_count = max(max_count, sum(s_Count))
        return max_count