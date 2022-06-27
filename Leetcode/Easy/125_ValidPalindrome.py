class Solution:
    def isPalindrome(self, s: str) -> bool:
        tmp = []
        for i in s:
            if not i.isalpha() and not i.isdigit():
                tmp.append(i)
        for i in tmp:
            s = s.replace(i,'')
        s = s.lower()
        return s == s[::-1]