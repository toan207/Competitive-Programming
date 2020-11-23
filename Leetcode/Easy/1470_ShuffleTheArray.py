# https://leetcode.com/problems/shuffle-the-array/

class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        prefix = nums[:len(nums)//2]
        suffix = nums[len(nums)//2:]
        ans = []
        for i in range(len(nums)//2):
            ans.append(prefix[i])
            ans.append(suffix[i])
        return ans