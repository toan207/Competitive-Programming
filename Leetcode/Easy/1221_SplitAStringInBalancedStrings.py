# https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution:
    def balancedStringSplit(self, s: str) -> int:
        countR = 0
        countL = 0
        if s[0] == 'R':
            countR += 1
        else:
            countL += 1
        n = len(s)
        count = 0
        for i in range(1, n):
            if countR == countL:
                count += 1
            if s[i] == 'R':
                countR += 1
            else:
                countL += 1
        if countR == countL:
            count += 1
        return count
    
print(Solution.balancedStringSplit(Solution, "RLRRLLRLRL"))