class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        wait_days = [0] * len(temperatures)
        ind_stack = []

        for i in range(len(temperatures)):
            while ind_stack and temperatures[i] > temperatures[ind_stack[-1]]:
                ind = ind_stack.pop()
                wait_days[ind] = i -ind
            ind_stack.append(i)

        return wait_days