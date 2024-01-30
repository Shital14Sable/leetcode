class Solution:
    def isValid(self, s: str) -> bool:
        str_map = {"}": "{", "]": "[", ")": "("}

        str_stack = []

        for m in s:
            # print(m)
            if m not in str_map:
                str_stack.append(m)
                continue
            if not str_stack or str_stack[-1] != str_map[m]:
                # print(str_stack, m)
                return False
            str_stack.pop()
        
        return not str_stack