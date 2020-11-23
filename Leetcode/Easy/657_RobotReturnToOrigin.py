# https://leetcode.com/problems/robot-return-to-origin/

class Solution:
    def judgeCircle(self, moves: str) -> bool:
        move = {'U': 0.000000001, 'D': -0.000000001, 'L': -1, 'R': 1}
        ans = 0
        for i in moves:
            ans += move[i]
        return -0.000000001< ans < 0.000000001
        