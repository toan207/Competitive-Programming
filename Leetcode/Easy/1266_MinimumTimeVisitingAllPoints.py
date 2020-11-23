# https://leetcode.com/problems/minimum-time-visiting-all-points/

class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        total = 0
        n = len(points)
        for i in range(1,n):
            total += max(abs(points[i][0] - points[i-1][0]), abs(points[i][1] - points[i-1][1]))
        return total