# https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution:
    def smallerNumbersThanCurrent(self, nums):
        dic = {}
        sorted_list = sorted(nums)

        for i,n in enumerate(sorted_list):
            if dic.get(n) == None:
                dic[n] = i
        return [dic[n] for n in nums]

print(Solution.smallerNumbersThanCurrent(Solution, nums=[7,7,7,7]))