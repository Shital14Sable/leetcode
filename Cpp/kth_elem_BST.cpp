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
    vector<int> stack;
    int kthSmallest(TreeNode* root, int k) {
        helper(root);
        sort(stack.begin(), stack.end()); 
        return stack[k-1];
    }

    void helper(TreeNode* node){
        if (node != NULL) stack.push_back(node->val);
        if (node->left != NULL) helper(node->left);
        if (node->right != NULL) helper(node->right);
    }
};