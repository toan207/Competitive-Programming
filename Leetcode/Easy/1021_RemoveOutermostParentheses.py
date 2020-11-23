# https://leetcode.com/problems/remove-outermost-parentheses/

class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        left = 0
        right = 0
        mark = ''
        ans = ''
        for i in S:
            if i == '(':
                left += 1
            else:
                right += 1
            mark += i
            if left == right:
                ans += mark[1:len(mark)-1]
                mark = ''
        return ans