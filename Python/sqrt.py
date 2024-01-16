class Solution:
    def mySqrt(self, x: int) -> int:
        temp_x = 1
        while temp_x * temp_x < x:
            temp_x +=1
        if temp_x * temp_x > x:
            return temp_x -1
        else:
            return temp_x 