# https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        _max = max(nums)
        nums.remove(_max)
        return (_max-1)*(max(nums)-1)