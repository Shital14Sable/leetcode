class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        b_temp = [[iq[:3]  for iq in board[:3]],
                [iw[:3]  for iw in board[3:6]],
                [iy[:3] for iy in board[6:9]],
                [ig[3:6] for ig in board[:3]],
                [ih[3:6] for ih in board[3:6]],
                [ij[3:6] for ij in board[6:9]],
                [ik[6:9] for ik in board[:3]], 
                [il[6:9] for il in board[3:6]],
                [im[6:9] for im in board[6:9]]]

        for i in range(9):
            list_1 = board[i]
            list_2 = [item[i] for item in board]
            list_3 = b_temp[i]

            # print(list_1, list_2, list_3, '\n')
            for j in range(1,10):
                empty_list = []
                empty_list.append(list_1.count(str(j)))
                empty_list.append(list_2.count(str(j)))
                empty_list.append(sum(x.count(str(j)) for x in list_3))

                if max(empty_list) > 1:
                    return 0

        return 1