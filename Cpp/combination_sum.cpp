class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        tar = target;
        nums_len = candidates.size();
        dfs(0, candidates, 0);
        return res;
    }

    void dfs(int i, vector<int>& candidates,  int total){
        if (total == tar){
            res.push_back(subset);
            return;
        }
        if (total>tar || i>=nums_len) return;

        subset.push_back(candidates[i]);
        dfs(i, candidates, total+candidates[i]);

        subset.pop_back();
        dfs(i+1, candidates, total);
    }
private:
    vector<vector<int>> res;
    vector<int> subset;
    int tar, nums_len;
};