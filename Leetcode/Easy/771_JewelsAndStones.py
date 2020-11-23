# https://leetcode.com/problems/jewels-and-stones/

class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        jew = dict()
        for i in J:
            jew[i] = 1
        count = 0
        for i in S:
            if jew.get(i):
                count += 1
        return count