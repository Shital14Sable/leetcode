class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        list_par = []
        stack = []
        def backtrack(open_count, close_count):
            if open_count == close_count == n:
                list_par.append("".join(stack))
                return

            if  close_count < open_count:
                stack.append(')')
                backtrack(open_count, close_count+1)
                stack.pop()
            
            if  open_count < n:
                stack.append('(')
                backtrack(open_count+1, close_count)
                stack.pop()
        backtrack(0,0)
        return list_par