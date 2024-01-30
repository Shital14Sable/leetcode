class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        countS =  {}
        for i in range(len(nums)):
            countS[nums[i]] = 1 + countS.get(nums[i], 0)
        from operator import itemgetter
        ret_list = dict(sorted(countS.items(), key=itemgetter(1), reverse = True)[:k])
        return ret_list