# https://leetcode.com/problems/toeplitz-matrix/

class Solution:
    def isToeplitzMatrix(self, matrix) -> bool:
        n = len(matrix)
        m = len(matrix[0])
        # Check columns
        for c in range(m):
            mark = matrix[0][c]
            for r in range(1, n):
                if r < n and c+r < m and matrix[r][c+r] != mark:
                    return False
        # Check rows
        for r in range(1, n):
            mark = matrix[r][0]
            i = 1
            for c in range(r+1, n):
                if i < m and matrix[c][i] != mark:
                    return False
                i += 1
        return True

matrix = [
  [41,45],
  [81,41],
  [73,81],
  [47,73],
  [0,47],
  [79,76]
]
print(Solution.isToeplitzMatrix(Solution, matrix=matrix))