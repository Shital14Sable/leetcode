class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for i in tokens:
            # print(stack, i)
            if i == "+":
                int_1, int_2 = stack[-1], stack[-2]
                stack.pop()
                stack.pop()
                stack.append(int_1 + int_2) 

            elif i == "/":
                int_1, int_2 = stack[-1], stack[-2]
                stack.pop()
                stack.pop()
                stack.append(int(int_2/int_1))
            elif i == "-":
                int_1, int_2 = stack[-1], stack[-2]
                stack.pop()
                stack.pop()
                stack.append(int_2 - int_1)
            elif i == "*":
                int_1, int_2 = stack[-1], stack[-2]
                stack.pop()
                stack.pop()
                stack.append(int_1 * int_2)
            else:
                stack.append(int(i))
        
        return stack[0]