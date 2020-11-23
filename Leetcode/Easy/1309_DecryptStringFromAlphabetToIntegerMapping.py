# https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

class Solution:
    def freqAlphabets(self, s: str) -> str:
        for i in range(26,0,-1):
            s = s.replace(str(i) + '#' * (i>9), chr(96+i))
        return s