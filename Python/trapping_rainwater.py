class Solution:
    def trap(self, height: List[int]) -> int:
        total_vol, l, r, lm, rm = 0, 0, len(height) -1, height[0], height[-1]
        while l< r:
            if lm < rm:
                l += 1
                lm = max(lm, height[l])
                total_vol += lm - height[l]

            else:
                r -= 1
                rm = max(rm, height[r])
                total_vol += rm - height[r]
        
        return total_vol

        