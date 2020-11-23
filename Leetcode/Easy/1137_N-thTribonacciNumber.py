# https://leetcode.com/problems/n-th-tribonacci-number/

class Solution:
    def __init__(self):
        self.f = [None] * 39
        self.f[0] = 0
        self.f[1] = 1
        self.f[2] = 1
        for i in range(3,39):
            self.f[i] = self.f[i-1] + self.f[i-2] + self.f[i-3]
    def tribonacci(self, n: int) -> int:
        return self.f[n]