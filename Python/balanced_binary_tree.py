# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
    
        def maxDepth(root: Optional[TreeNode]) -> int:
            if not root:
                return [True, 0]
            l = maxDepth(root.left)
            r = maxDepth(root.right)
            balanced = l[0] and r[0] and abs(r[1] - l[1]) <= 1
            return [balanced, 1 + max(l[1], r[1])]

        return maxDepth(root)[0]