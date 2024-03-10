# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        stack = []
        def helper(node, stack):
            if node:
                stack.append(node.val)
            if node.left:
                helper(node.left, stack)
            if node.right:
                helper(node.right, stack)
        helper(root, stack)
        stack.sort()
        # print(stack)
        return stack[k-1]