# https://leetcode.com/problems/range-sum-of-bst/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
        
class Solution:
    def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
        self.total = 0
        self.traversal(root, L, R)
        return self.total
    def traversal(self, root, L, R):
        if not root:
            return
        if root.val < L:
            self.traversal(root.right, L, R)
        else:
            self.traversal(root.left, L, R)
            if L <= root.val <= R:
                self.total += root.val
            self.traversal(root.right, L, R)