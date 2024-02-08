class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        low_in_window = prices[0]
        for price in prices:
            if price < low_in_window:
                low_in_window = price
            max_profit = max(max_profit, price - low_in_window)
        return max_profit