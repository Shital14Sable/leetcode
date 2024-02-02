class Solution:
    def maxArea(self, height: List[int]) -> int:
        max_vol, l, r = 0, 0, len(height) - 1
        while l < r:
            max_vol = max(max_vol, min(height[l], height[r]) * (r - l))
            if height[l] < height[r]:
                l += 1
            elif height[r] <= height[l]:
                r -= 1
        return max_vol