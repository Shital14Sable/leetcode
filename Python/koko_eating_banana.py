class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        if h == len(piles):
            return max(piles)
        r = max(piles)
        l = 1
        res = r

        while l<=r:
            k = (l + r) // 2
            est_time = 0
            for pile in piles:
                est_time += pile//k
                if pile % k:
                    est_time += 1
            
            if est_time <= h:
                res = min(res, k)
                r = k - 1
            else:
                l = k + 1
        
        return res


        # while r > l:
        #     est_hr = 0
        #     i = 0
        #     mid = l + (r-l) // 2
        #     while est_hr  < h and i < len(piles):
        #         est_hr += piles[i]//mid
        #         if piles[i] % mid:
        #             est_hr += 1
        #         i += 1
        #     if est_hr == h:
        #         return mid
        #     elif est_hr < h:
        #         l = mid +1
        #     else:
        #         r = mid - 1
        # return 5
