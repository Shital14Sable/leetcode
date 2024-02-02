class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        if len(position) == 1:
            return 1
        stack_pos = [list(a) for a in zip(position, speed)]
        stack_pos = sorted(stack_pos, reverse=True)
        fleet = []
        for pos, s in stack_pos:
            fleet.append((target-pos)/s)
            if len(fleet) >= 2 and fleet[-1] <= fleet[-2]:
                fleet.pop()
        return len(fleet)
        #     for  i, car in enumerate(stack_pos):
        #         if car[0] >= target:
        #             fleet += 1
        #             stack_pos.pop(i)
        #         elif len(stack_pos) == 1:
        #             # print(car, stack_pos, fleet)
        #             fleet += 1
        #             stack_pos.pop(i)
        #         else:
        #             if car[0] += car[1] >
        #             car[0] += car[1]
                    
        #     stack_pos, fleet = self.check_fleet(stack_pos, fleet)
        # return fleet
    
    # def check_fleet(self, stack, fleet):
    #     l = 1
    #     while l < len(stack):
    #         car_pos, car_speed = stack[l-1]
    #         print(stack)
    #         if stack and car_pos == stack[l][0]:
    #             small_speed = min(car_speed, stack[l][1])
    #             stack[l-1][1] = small_speed
    #             stack.pop(l)
    #         else:
    #             l += 1
    #     return stack, fleet