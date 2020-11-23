# https://leetcode.com/problems/maximum-69-number/

class Solution:
    def maximum69Number (self, num: int) -> int:
        f = 0
        i = 0
        j = 0
        temp = num
        while temp!=0:
            if temp%10==6:
                j = i
                f = 1
            i += 1
            temp //= 10
        return num + f * 10**j * 3