# https://leetcode.com/problems/flipping-an-image/

class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        return [[1 ^ i for i in reversed(row)] for row in A] # XOR 1^1 = 0 and 1^0 = 1