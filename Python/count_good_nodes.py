# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        self.arr = 0
        def dfs(node, highest):
            if node.val >= highest:
                self.arr += 1
                highest = node.val
            if node.left:
                dfs(node.left, highest)
            if node.right:
                dfs(node.right, highest)
        dfs(root, root.val)
        return self.arr