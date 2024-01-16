class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            req = target-nums[i]
            if req in nums[i+1:]:
                ind = (nums[i+1:]).index(req)  + i + 1
                return [ind, i]