# https://leetcode.com/problems/xor-operation-in-an-array/

class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        temp = start
        for i in range(1,n):
            start = start ^ (temp + 2*i)
        return start