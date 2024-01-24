class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        nums.sort()
        count = 1
        count_list = [count]
        for i in range(1, len(nums)):
            if nums[i] == nums[i-1] + 1:
                count = count + 1
                count_list.append(count)
            elif nums[i] == nums[i-1]:
                continue
            else:
                count = 1
        
        return max(count_list)