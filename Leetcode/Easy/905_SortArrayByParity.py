# https://leetcode.com/problems/sort-array-by-parity/

class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        n = len(A)
        mark = 0
        for i in range(n):
            if not A[i] % 2:
                A[mark], A[i] = A[i], A[mark]
                mark += 1
        return A