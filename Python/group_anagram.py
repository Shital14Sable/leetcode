from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:        
        op_group = []
        strs.sort(key=len)
        while strs:
            temp_list = [strs.pop(0)]
            j = 0
            while j < len(strs) and len(temp_list[0]) == len(strs[j]):
                if sorted(temp_list[0]) == sorted(strs[j]):
                    temp_list.append(strs.pop(j))
                else:
                    j = j + 1
            op_group.append(temp_list)
        return op_group