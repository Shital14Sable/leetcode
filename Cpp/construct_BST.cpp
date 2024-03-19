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
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder) {
        return helper(0, 0, inorder.size()-1, preorder, inorder);
    }

    TreeNode* helper(int preStart, int inStart, int inEnd, vector<int> &preorder, vector<int> &inorder){
        if (preStart > preorder.size() || inStart> inEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);

        int mid = 0;
        for (int i = inStart; i<=inEnd; i++){
            if (root->val == inorder[i]) {
                mid = i;
                break;
            }
        }
        root->left = helper(preStart+1, inStart, mid-1, preorder, inorder);
        root->right = helper(preStart+mid-inStart+1, mid+1, inEnd, preorder, inorder);
        return root;
    }
};