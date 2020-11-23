# https://leetcode.com/problems/destination-city/

class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        d = {}
        for i in paths:
            d[i[0]] = i[1]
        mark = paths[0][0]
        while d.get(mark):
            mark = d[mark]
        return mark