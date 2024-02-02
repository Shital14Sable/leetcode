class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        t_r, b_r = 0, len(matrix) -1
        l_c, r_c = 0, len(matrix[0]) -1
        while t_r <= b_r:
            m_r = (t_r + b_r)//2
            if matrix[m_r][-1] < target:
                    t_r = m_r + 1
            elif matrix[m_r][0] > target:
                    b_r = m_r -1
            else:
                break
        if not (t_r <= b_r):
            return False

        while l_c <= r_c:
            m_c = (l_c+r_c)//2
            if matrix[m_r][m_c] < target:
                l_c = m_c + 1
            elif matrix[m_r][m_c] > target:
                r_c = m_c-1
            else:
                return True
        return False