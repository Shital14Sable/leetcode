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
    bool trip = true;

    bool isBalanced(TreeNode* root) {
        helper(root);
        return trip;        
    }
    int helper(TreeNode* root){
        if(root == NULL) return 0;
        int l, r;
        l = helper(root -> left);
        r = helper(root -> right);
        if(abs(l-r)>1) trip = false;
        return max(l,r) + 1;
    }
};