# https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

import sys
sys.setrecursionlimit(100000)

class Solution:
    def numberOfSteps (self, num: int, d=0) -> int:
        if num == 0:
            return d
        elif num%2:
            d = self.numberOfSteps(num-1, d+1)
        else:
            d = self.numberOfSteps(num//2, d+1)
        return d