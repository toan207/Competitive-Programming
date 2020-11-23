# https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        _max = max(candies)
        mark = [False] * len(candies)
        for i in range(len(candies)):
            if candies[i] + extraCandies >= _max:
                mark[i] = True
        return mark