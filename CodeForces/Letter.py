# https://codeforces.com/problemset/problem/43/B

from collections import Counter

s1 = Counter(input())
s2 = Counter(input())

f = 1
for i in s2.keys():
    if s1[i]<s2[i] and i != ' ':
        f = 0
        break

print('YES' if f else 'NO')