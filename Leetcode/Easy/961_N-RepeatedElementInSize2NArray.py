# https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        while 1:
            s = random.sample(A, 2)
            if s[0] == s[1]:
                return s[0]