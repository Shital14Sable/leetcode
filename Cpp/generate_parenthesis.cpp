class Solution {
public:
    void backtrack(vector<string> & list_par, int open_count, int close_count, int max_count, string stack_par)
    {
        if (open_count == max_count && close_count == max_count)
        {
            list_par.push_back(stack_par);
            return;
        }
        if (open_count < max_count) backtrack(list_par, open_count+1, close_count, max_count, stack_par + "(");
        if (open_count > close_count) backtrack(list_par, open_count, close_count+1, max_count, stack_par + ")");
    }


    vector<string> generateParenthesis(int n) {
        vector<string> list_par;
        string stack_par;
        backtrack(list_par, 0, 0, n, stack_par);
        return list_par;
    }


};