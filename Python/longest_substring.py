class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        x = [*s]
        if len(x) == 0:
            return 0
        max_length = 0
        
        for i in range(len(x)):
            letter_stack= [x[i]]
            temp_count = 1
            j = i+1
            while j < len(x):
                letter_stack.append(x[j])
                if len(set(letter_stack)) == len(letter_stack):
                    temp_count += 1
                    j += 1
                else:
                    break
            max_length = max(max_length, temp_count)
            # print(letter_stack)
            
        return max_length