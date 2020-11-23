# https://leetcode.com/problems/rotate-array/

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        k = k % len(nums)
        n = len(nums)
        nums.reverse()
        for i in range(k//2):
            nums[i], nums[k-i-1] = nums[k-i-1], nums[i]
        for i in range(k, (n-k)//2 + k):
            nums[i], nums[n-1-i+k] = nums[n-1-i+k], nums[i]