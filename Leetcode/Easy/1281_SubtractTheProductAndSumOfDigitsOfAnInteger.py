# https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        _sum = 0
        n = str(n)
        for i in n:
            x = int(i)
            product *= x
            _sum += x
        return product - _sum