# https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/

class Solution:
    def oddCells(self, n: int, m: int, indices: List[List[int]]) -> int:
        R = [False] * n
        C = [False] * m
        for i, j in indices:
            R[i] = not R[i]
            C[j] = not C[j]
        sum_row = sum(R)
        sum_col = sum(C)
        return sum_row * m + sum_col * n - 2 * sum_row * sum_col