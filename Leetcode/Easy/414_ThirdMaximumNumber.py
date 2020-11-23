# https://leetcode.com/problems/third-maximum-number/

class Solution:
    def thirdMax(self, nums) -> int:
        mark = list()
        for i in nums:
            if i not in mark:
                if len(mark) < 3:
                    mark.append(i)
                elif i > min(mark):
                    mark.remove(min(mark))
                    mark.append(i)
        if len(mark) == 3:
            while len(mark) > 1:
                mark.remove(max(mark))
            return mark[0]
        else:
            return max(mark)

print(Solution.thirdMax(Solution, [5,2,4,1,3,6,0]))