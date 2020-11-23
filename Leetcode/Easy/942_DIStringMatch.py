# https://leetcode.com/problems/di-string-match/

class Solution:
    def diStringMatch(self, S: str) -> List[int]:
        s, e = 0, len(S)
        n = len(S)
        A = []
        for i in S:
            if i == 'I':
                A.append(s)
                s += 1
            else:
                A.append(e)
                e -= 1
        return A + [s]