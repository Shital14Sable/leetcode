class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool sqre[9][9] = {false};

        for(size_t i=0; i<9; i++){
            for(size_t j=0; j<9; j++){
                if(board[i][j]=='.') continue;

                int indx = board[i][j] - '0' -1;
                int ar_code = (i/3)*3 + (j/3);

                if(row[i][indx] || col[j][indx]  || sqre[ar_code][indx]){
                    return false;
                }

                row[i][indx] = true;
                col[j][indx] = true;
                sqre[ar_code][indx] = true;
            }
        }
        return true;
    }
};