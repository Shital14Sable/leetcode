class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left, top;
        left = top = 0;
        int bot = matrix.size() - 1;
        int right = matrix[0].size() - 1;

        while(top <= bot){
            int mid_row = (top + bot) / 2;
            cout << top << "   " << bot << "   "  << mid_row << endl;
            if (target > matrix[mid_row][right]) top = mid_row + 1;
            else if(target < matrix[mid_row][0]) bot = mid_row - 1;
            else {
                // cout << top << " break " << bot << "   "  << mid_row << endl;
                break; 
            }         
        }

        if (top > bot) return false;
        int mid_row = (top + bot) / 2;

        while(left <= right)
        {
            int mid_col = (left + right) / 2;
            // cout << matrix[mid_row][mid_col] << "   " << matrix[mid_row][0] <<endl;
            if (target > matrix[mid_row][mid_col]) left = mid_col + 1;
            else if(target < matrix[mid_row][mid_col]) right = mid_col - 1;
            else return true;           
        }
        return false;
    }
    
};