# https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])
        ans = 0
        for i in range(n):
            if grid[i][m-1] < 0:
                while m > 0 and grid[i][m-1] < 0:
                    ans += n - i
                    m -= 1
                if m == 0:
                    break
        return ans