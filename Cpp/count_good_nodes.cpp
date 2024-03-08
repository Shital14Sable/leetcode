/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int arr = 0;
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return arr;
    }

    void dfs(TreeNode* node, int maxVal){
        if (node->val >= maxVal){
            arr++;
            maxVal = node->val;
        }
        if (node->left != NULL) dfs(node->left, maxVal);
        if (node->right != NULL) dfs(node->right, maxVal);
    }
};