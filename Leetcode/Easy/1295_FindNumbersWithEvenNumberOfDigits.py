# https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/

class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        return len(list(filter(lambda x: not len(str(x))%2, nums)))