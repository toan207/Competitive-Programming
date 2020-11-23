# https://leetcode.com/problems/n-ary-tree-preorder-traversal/

"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res = []
        
        if not root:
            return res
        
        stack = [root]
        while stack:
            cur = stack.pop()
            res.append(cur.val)
            stack.extend(cur.children[::-1])
        return res